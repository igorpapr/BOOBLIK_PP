//Made by Ihor Paprotskyi, FI-2, SE, Group 1
#include <cstdlib>
#include <cassert>

void fillArray(int * data, size_t size)
{	
	assert(size > 0);
	for(int i = 0; i < size; ++i)
    {
		data[i] = rand() % 21 - 10;
	}
}
