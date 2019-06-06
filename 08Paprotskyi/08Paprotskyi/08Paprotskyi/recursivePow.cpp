#include <iostream>

void zet(double &y, double &x, unsigned int &k, size_t &count)
{
	count++;
	if (k > 0)
	{
		if (k%2==1)
		{
			y *= x;
			k--;
		}
		else
		{
			x *= x;
			k /= 2;
		}
		zet(y,x,k,count);
	}
}

double power(double x, unsigned int n, unsigned int &counter)
{
	double y = 1;
	zet(y, x, n, counter);
	return y;
}