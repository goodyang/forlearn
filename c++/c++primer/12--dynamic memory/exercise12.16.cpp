#include <iostream>
#include <memory>
#include <string>
#include <vector>
using namespace std;
int main()
{
	unique_ptr<int> p;
	//unique_ptr<int> q = p;
	//error, attempting to reference a deleted function
	
	//unique_ptr<int> q(p);
	
	int ix = 1024, *pi = &ix, *pi2 = new int(2048);
	typedef unique_ptr<int> IntP;
	
	//IntP p0(ix); compile error 
	
	//IntP p1(pi); runtime error. pi is not allocate using new 
	
	IntP p2(pi2); //will cause a dangling pointer 
	
	//IntP p3(&ix);
	
	IntP p4(new int(2048));
	
	IntP p5(p2.get()); //runtime error.  double free
	
	return 0;
}