//Made by Ihor Paprotskyi, FI-2, SE, Group 1
#include <cstdlib>
#include <ctime>
#include "shellsort.h"
#include <iostream>

//#define NDEBUG
#include <cassert>

#ifndef NDEBUG

bool isSorted(const int * arr, size_t size)
{
		for (int i = 1; i < size; ++i)
			if (arr[i] < arr[i-1]) 
				return false;
		return true;
}

	
bool sameInside (int* arr1, int* arr2, size_t size) {
    bool result = false;
    for (int j = 0; j < size; ++j) {
		result = false;
        for (int i = 0; i < size; ++i) {
            if (arr1[j] == arr2[i]) {
				arr1[j] == -100;		//} change to value outside the range (in our case -10;10) 
				arr2[i] == -100;		//}	if we have some amount of same elements (for ex.: arr1{.., 3 , 3 , 3 , .. }, arr2{.., 3 , 4 , ..}
				result = true;
                break;
            }
        }
		if (result == false)
			return false;
    }
	return true;
}

#endif // !NDEBUG

void arrayCopy(int * data, int * destination, size_t size)
{
	for (size_t i = 0; i < size; ++i)
	{
		destination[i] = data[i];
	}
}


int * shellSort(int * startArr, size_t size) // O(N^2), shell gap sequence 
{
	int * copyArr = new int[size];
	arrayCopy(startArr, copyArr, size);

	size_t gap = 0, j = 0, i = 0;
	int temp = 0;
 
	// Gap between index of the element to be compared
    for(gap = size / 2; gap > 0; gap /= 2)
    {
        for(i = gap; i < size;i += 1)
        {
			//copy current member of array to swap
			temp = startArr[i];
				
			for(j = i; (j >= gap) && (startArr[j - gap] > temp); j -= gap)
				startArr[j] = startArr[j - gap];

			startArr[j] = temp;
        }
    }

	assert(isSorted(startArr, size));
	assert(sameInside(startArr, copyArr, size));
	
	printArray(startArr,size);
	printArray(copyArr,size);

	delete copyArr;
	copyArr = 0;

	return startArr;
}