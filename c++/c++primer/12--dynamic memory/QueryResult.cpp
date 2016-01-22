#include "QueryResult.h"
			
ostream& print(ostream& out, const QueryResult &result)
{
	auto lset = result.line_set;
	auto blob = (result.text);
	out << "element " << result.query_str << " occurs " << lset->size() << (lset->size()<=1?" time " : " times ") << "\n";
	for(int line : (*lset))
	{
		out << "\t(line " << (line+1) << ") " << StrBlobPtr(blob, line).deref() << "\n"; 
	} 
	return out;
}