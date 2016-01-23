#include "QueryResult.h"
			
ostream& print(ostream& out, const QueryResult &result)
{
	auto lset = result.line_set;
	auto blob = (result.text);
	auto beg = blob->begin();
	out << "element " << result.query_str << " occurs " << lset->size() << (lset->size()<=1?" time " : " times ") << "\n";
	for(int line : (*lset))
	{
		out << "\t(line " << (line+1) << ") " << *(beg+line) << "\n"; 
	} 
	return out;
}