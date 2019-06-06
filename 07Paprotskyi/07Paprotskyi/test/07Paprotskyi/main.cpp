//Made by Ihor Paprotskyi, FI-2, SE, Group 1
#include "fibMatrix.h"

#include <iostream>
using namespace std;

int main()
{
	//F(0)= 0;
	//F(1)= 1;
	for (size_t n = 1; n < 15; ++n)
	{
		cout<<"Fibonacci value of n = "<<n<<" is "<<fibonacci(n)<<endl;
		cout<<"- - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
	}
	return 0;
}