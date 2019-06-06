//Made by Ihor Paprotskyi, FI-2, SE, Group 1
#include <iostream>
#include "Horner.h"

using namespace std;

int main()
{
	size_t size = 1;
	for (double x = -2; x < 3; x+=0.5, size+=3)
	{
		double * coeff = new double [size];
		cout.precision(14);
		cout<<"x = "<<x<<endl;
		cout<<"size = "<<size<<endl;
		cout<<"Horner result = "<<Horner(coeff,size,x)<<endl;
		cout<<"-		-		-		-"<<endl;
	}
	return 0;
}