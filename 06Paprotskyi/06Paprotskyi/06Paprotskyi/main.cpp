//Made by Ihor Paprotskyi, FI-2, SE, Group 1
#include "Shellsort.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL)); //this command is here to avoid generating same pseudo-random values every iteration

	for (size_t size = 5; size <= 15; size += 5)
	{
		int * startArr = new int [size];
		
		fillArray(startArr,size);
	
		cout<<"size = "<<size<<endl;
		cout<<"Input: "<<endl;
		printArray(startArr,size);
	
		shellSort(startArr,size);

		cout<<"Shell sort result: "<<endl;
		printArray(startArr,size);
		cout<<"- - - - - - - - - - - - - - - - - -"<<endl;
	
		delete[] startArr;
		startArr = 0;
	}

	return 0;
}