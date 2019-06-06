//Made by Ihor Paprotskyi, 1 group
#include "function.h"
#include <iostream>
using namespace std;

int main()
{
	double x = 2;
	for (unsigned int n = 0; n < 6; n++)
	cout<<"x = "<< x <<"; n = "<< n <<"; result = "<< funct(x,n) <<endl;
	return 0;
}