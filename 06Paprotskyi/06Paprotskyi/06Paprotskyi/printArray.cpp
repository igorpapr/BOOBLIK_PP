//Made by Ihor Paprotskyi, FI-2, SE, Group 1
#include <iostream>

void printArray(const int * data, size_t size)
{
	std::cout<<"\t[";
	for(size_t i = 0; i < size - 1; ++i)
    {
		std::cout<<data[i] <<" , ";
	}
	std::cout<<data[size-1]<<']'<<std::endl;
}