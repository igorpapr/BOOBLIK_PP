//Made by Paprotskyi Ihor, SE, FI-2, NaUKMA
#include <cassert>

size_t numberOfNulls(unsigned int x)
{
	size_t counter = 0;
	for(size_t i = 0; i < 32; ++i)
	{
		if((x&1)==0)
			++counter;
		x>>=1;
	}
	assert(counter<=32);
	return counter;
}