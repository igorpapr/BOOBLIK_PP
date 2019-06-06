//Made by Paprotskyi Ihor, SE, FI-2, Group 1
#include "includer.h"
#include <cmath>//for testing
#include <ctime>//for time testing
#include <cstdio>

#include <iostream>
using namespace std;

int main(void)
{
	cout.precision(15);
	
	double x;
	int n;
	
	clock_t start;
	double duration;

	for (int i=0; i<3;i++)
	{
		switch (i)
		{
		default:
			break;
		case 0:
			x = 98764986483.725;
			n = 4;	
			break;
		case 1:
			x = 3.725;
			n = 0;
			break;
		case 2:
			x = -72;
			n = 100;
			break;
		}	
		
		start = clock();
		cout<<"The default power of x = "<<x<<"; and n = "<<n<<"; is "<< power(x,n)<<endl;
		duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
		cout<<"Time of working: "<<duration<<"s"<<endl;
		
		start = clock();
		cout<<"The qick power of x = "<<x<<"; and n = "<<n<<"; is "<< quickPower(x,n)<<endl;
		duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
		cout<<"Time of working: "<<duration<<"s"<<endl;
		
		start = clock();
		cout<<"The recursive default power of x = "<<x<<"; and n = "<<n<<"; is "<< recursivePower(x,n)<<endl;
		duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
		cout<<"Time of working: "<<duration<<"s"<<endl;
		
		start = clock();
		cout<<"The recursive quick power of x = "<<x<<"; and n = "<<n<<"; is "<< quickRecursivePower(x,n)<<endl;
		duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
		cout<<"Time of working: "<<duration<<"s"<<endl;
		
		cout<<"The power from cmath lib of x = "<<x<<"; and n = "<<n<<"; is "<< pow(x,n)<<endl;
		
		cout<<endl;
				
	}
	cout<<"The number of default power cycle steps with n = 100, for example, equals to n and = 100\nThe number of quick power cycle steps with n = 100 is 8 (which means that it is way faster algorytm)\nThe conclusion is: it is better to use quick power,\n 2nd place - default power, 3rd - recursive quick power, 4th - recursive default power"<<endl;
}