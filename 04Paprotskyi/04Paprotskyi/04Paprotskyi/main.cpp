//Made by Ihor Paprotskyi, FI-2, SE, group 1
#include <iostream>
#include <limits>
using namespace std;

#include "ariGeom.h"

int main()
{
	cout.precision(numeric_limits<double>::digits10);
	
	double a = 3;
	double b = 15;
	cout<<"AriGeom average of "<<a<<" and "<<b<<" is "<<ariGeom(a,b)<<endl;

	a = 0.00000000000001; // = 1e-14
	b = 99999.9999999999;
	cout<<"AriGeom average of "<<a<<" and "<<b<<" is "<<ariGeom(a,b)<<endl;
	
	////for testing of assert:
	//a = -999.1111111111111;
	//b = 1.99999999999;
	//cout.precision(numeric_limits<double>::digits10);
	//cout<<"AriGeom average of "<<a<<" and "<<b<<" is "<<ariGeom(a,b)<<endl;
	
	return 0;
}