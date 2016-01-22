#include <iostream>
#include <memory>
#include <string>
using namespace std;
int main()
{
	unsigned n = 5;
	allocator<string> alloc;
	auto const p = alloc.allocate(n);
	auto q = p;
	string s;
	while(cin>>s && q!=p+n){
		alloc.construct(q++, s);
	}
	const size_t size = q-p;
	cout << size << endl;
	for(int i=0; p+i != q; i++){
		cout << *(p+i) << " ";
	}
	cout << endl;
	while(q!=p)
		alloc.destroy(--q);
	alloc.deallocate(p, n);
	
	return 0;
}