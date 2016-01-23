#ifndef QUERYRESULT_H
#define QUERYRESULT_H

#include <string>
#include <vector>
#include <set>
#include <memory>
//#include "StrBlob.h"
#include "StrVec.h"
using namespace std;

class QueryResult{
	friend ostream& print(ostream&, const QueryResult&);
	public:
		using line_no = size_t;
		QueryResult(const string& query_str_, 
					shared_ptr<StrVec> text_, 
					shared_ptr<set<line_no>> line_set_) : 
			query_str(query_str_), text(text_), line_set(line_set_){ }
		
	private:
		string query_str;
		shared_ptr<StrVec> text;
		shared_ptr<set<line_no>> line_set;	
};

#endif
