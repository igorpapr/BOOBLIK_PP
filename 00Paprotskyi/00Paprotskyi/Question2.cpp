#include <cmath>
//(-1)^(k+1)* x^(2*(k+1)+1) * (2*k+1)!	  (-1) * x^2
//-----------------------------------  = ------------
//(-1)^k * x ^(2*k+1) * (2*(k+1) + 1)!     2*(k+1)+1

double sinus(double epsilon, double x)
{
	double temp = x;
	double sum = 0;
	for (int k = 0; ;k++)
	{ 
	if (abs(temp - temp / ((-1) * x * x / ( 2* (k+1) + 1))) < epsilon)
		{
			return sum;
		}
	temp = temp * (-1) * x * x / ( 2* (k+1) + 1);
	sum += temp;
	}

}