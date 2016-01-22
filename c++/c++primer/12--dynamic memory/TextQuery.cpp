#include "TextQuery.h"

TextQuery::TextQuery(ifstream &infile){
		string line;
		while(getline(infile, line)){
			data.push_back(line);
			int i = data.size()-1;
			istringstream iss(line);
			for(string text, word; iss >> text; word.clear()){
				remove_copy_if(text.begin(), text.end(), back_inserter(word), ispunct);
				auto &nos = word_line[word];
				if(!nos) nos.reset(new set<line_no>);
				nos->insert(i);
			}
		}
}
QueryResult TextQuery::query(const string &query_str) const
{
	static shared_ptr<set<line_no>> nodata(new set<line_no>);
	auto loc =  word_line.find(query_str);
	if(loc!=word_line.end()){
		return QueryResult(query_str, data, loc->second);
	}else{
		return QueryResult(query_str, data, nodata);
	}
}

