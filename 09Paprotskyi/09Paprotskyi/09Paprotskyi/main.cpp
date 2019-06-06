//Made by Ihor Paprotskyi, Group 1, NaUKMA, FI-2, SE
#include "functions.h"
#include "dichotomy.h"
#include <iostream>
using namespace std;

int main()
{
	const double PI = 3.141592653589793;
	const double eps = 1e-15;
	double left[] = {-1, PI-1, 2, 0};
	double right[] = {1, PI, 3, 2};
	cout.precision(16);
	cout<<"sin(x) = x, ["<<left[0]<<','<<right[0]<<"]: x = "<<
		dichotomy(function1, left[0], right[0], eps)<<endl;
	cout<<"sin(x) = 0, ["<<left[1]<<','<<right[1]<<"]: x = "<<
		dichotomy(function2, left[1], right[1], eps)<<endl;
	cout<<"ln(x) = 1, ["<<left[2]<<','<<right[2]<<"]: x = "<<
		dichotomy(function3, left[2], right[2], eps)<<endl;
	cout<<"exp(x) = 2-x, ["<<left[3]<<','<<right[3]<<"]: x = "<<
		dichotomy(function4, left[3], right[3], eps)<<endl;
	return 0;
}