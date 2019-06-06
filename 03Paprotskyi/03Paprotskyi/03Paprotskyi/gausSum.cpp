//Made by Ihor Paprotskyi, SE, FI-2, group 1;

#include <cmath>
//-x^2 * (2k+1) / (2k+3) * (k+1)
double gausSum (double x, double eps)
{
	if (x < 0)
		x = -x; //function is even
	double sum = 0;
	double f = x;
	int n = 0;

	do
	{
		sum += f;
		f *= -x * x * (2 * n + 1) / ((2 * n + 3)*(n + 1));
		n++;
	} while (abs(f) > eps);
	

	return sum;
}