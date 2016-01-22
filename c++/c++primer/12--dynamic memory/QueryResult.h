#ifndef QUERYRESULT_H
#define QUERYRESULT_H

#include <string>
#include <vector>
#include <set>
#include <memory>
#include "StrBlob.h"
using namespace std;

class QueryResult{
	friend ostream& print(ostream&, const QueryResult&);
	public:
		using line_no = StrBlob::size_type;
		QueryResult(const string& query_str_, 
					StrBlob text_, 
					shared_ptr<set<line_no>> line_set_) : 
			query_str(query_str_), text(text_), line_set(line_set_){ }
		
	private:
		string query_str;
		StrBlob text;
		shared_ptr<set<line_no>> line_set;	
};

#endif
