//Made by Ihor Paprotskyi, Group 1, NaUKMA, FI-2, SE
#include "functions.h"
#include "constants.h"
#include <iostream>
using namespace std;

int main()
{
	cout.precision(numeric_limits<double>::digits10);

	cout<<"= = = = = = = = = = = = = = = DATA = = = = = = = = = = = = = = = ="<<endl;
	cout<<"\t\ta = "<<a<<";  b = "<<b<<";  eps = "<<eps<<endl;
	cout<<"= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = ="<<endl;
	cout<<"= = = = = Function 1: Eliptic integral of the first kind = = = = ="<<endl;
	cout<<"\t"<<elliptical_integral()<<endl<<endl;
	
	cout<<"= = = = = = = = = Function 2: Dirichlet integral = = = = = = = = ="<<endl;
	cout<<"\t"<<dirichlet_integral()<<endl<<endl;
	
	cout<<"= = = = = = = Function 3: Poisson integral = = = = = = = = = = = ="<<endl;
	cout<<"\t"<<poisson_integral()<<endl<<endl;

	cout<<"= = = = = = = = = Function 4: Euler integral = = = = = = = = = = ="<<endl;
	cout<<"Due to a lot of computations, this function's integral computation works very slowly"<<endl;
	cout<<"Even with this data it isn't accurate enough, please wait a bit for the result"<<endl;
	cout<<"\t"<<euler_integral()<<endl<<endl;
	
	return 0;
}