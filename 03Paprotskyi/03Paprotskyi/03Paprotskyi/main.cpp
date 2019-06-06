//Made by Ihor Paprotskyi, SE, FI-2, group 1;
#include "includer.h"

#include <cmath> //for testing
#include <iostream>
using namespace std;

int main(void) 
{
	double x = -13;
	double eps = 1e-7;
	cout.precision(16);
	
	cout<<"Default exponent starts to fail from -12 and lower x"<<endl;
	cout<<"The default exponent with x = "<<x<<" and eps = "<<eps<<" is "<<exponentDefault(x,eps)<<endl;
	cout<<"The upgraded exponent with x = "<<x<<" and eps = "<<eps<<" is "<<exponentUpgraded(x,eps)<<endl;
	cout<<"Cmath exp = "<<exp(x)<<endl;
	cout<<endl;
	cout<<endl;
	
	x = -3;
	while (x <= 10)
	{
		cout<<"The default exponent with x = "<<x<<" and eps = "<<eps<<" is "<<exponentDefault(x,eps)<<endl;
		cout<<"The upgraded exponent with x = "<<x<<" and eps = "<<eps<<" is "<<exponentUpgraded(x,eps)<<endl;
		cout<<"Cmath exp = "<<exp(x)<<endl;
		cout<<"The gaus sum with x = "<<x<<" and eps = "<<eps<<" is "<<gausSum(x,eps)<<endl;
		cout<<"The gaus simpson with x = "<<x<<" and eps = "<<eps<<" is "<<gausSimpson(x,eps)<<endl;
		
		cout<<endl;
		x++;
	}

	return 0;
}