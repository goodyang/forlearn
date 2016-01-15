#include "Chapter6.h"

int fact(int val) 
{
	int ret = 1;
	for(;val>0;val--) {
		ret *= val;
	}
	return ret;
}