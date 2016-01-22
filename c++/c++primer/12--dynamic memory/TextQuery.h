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
#include "StrBlob.h"
using namespace std;

class QueryResult;
class TextQuery {
	public:
		using line_no = StrBlob::size_type;
		TextQuery(ifstream&);
		QueryResult query(const string&) const;
	private:
		StrBlob data;
		map<string, shared_ptr<set<line_no>>> word_line;	
};

#endif