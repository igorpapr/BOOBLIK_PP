#include <iostream>

// Additional function
void fib(double &f1, double &f2, unsigned int n, size_t &count)
{
	count++;
	if (n >= 2)
	{
		double f = f2; f2 += f1; f1 = f;
		fib(f1, f2, n-1, count);
	}
}

double Fibonaci (unsigned int n, unsigned int &counter)
{
	double f0 = 0, f1 = 1, result;
	switch (n)
	{
		case 0:
			result = f0;
			break;
		case 1:
			result = f1;
			break;
		default:
			fib(f0, f1, n, counter);
			result = f1;
	}
	return result;
}