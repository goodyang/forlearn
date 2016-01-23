#ifndef TEXTQUERY_H
#define TEXTQUERY_H

#include <vector>
#include <string>
#include <map>
#include <set>
#include <memory>
#include <fstream>
#include <sstream>
#include <iostream>
#include <algorithm>
#include "QueryResult.h"
//#include "StrBlob.h"
#include "StrVec.h"
using namespace std;

class QueryResult;
class TextQuery {
	public:
		using line_no = size_t;
		TextQuery(ifstream&);
		QueryResult query(const string&) const;
	private:
		//StrBlob data;
		shared_ptr<StrVec> data;
		map<string, shared_ptr<set<line_no>>> word_line;	
};

#endif