//Made by Ihor Paprotskyi, SE, FI-2, group 1;
#include <cmath>

double exponentDefault(double x, double eps)
{
	double sum = 1;
	double f = 1;
	int n = 1;

	do
	{
		f *= x/n;
		sum += f;
		n++;
	} while (abs(f) > eps);
	
	return sum;
}

double exponentUpgraded (double x, double eps)
{
	if (x >= 0)
	{
		return exponentDefault( static_cast<int>(x) , eps) * exponentDefault( x - static_cast<int>(x), eps);	
	}
	else
	{
		return 1/exponentDefault(-x,eps);
	}
}