
#include <cmath>
//we can find sqrt of n = 2 and n = 4
double sqrtFromPractice(int n, double x, double eps)
{
	if (n == 2)
	{
		double s = 0.5 * x;
		double t;
		do
		{
			t = s;
			s = (s + x / s) * 0.5;
		}
		while ((fabs(s - t) / s) > eps);
		return s;
	}
	else if (n == 4)
	{
		return sqrtFromPractice(2,sqrtFromPractice(2,x,eps),eps);
	}
	else
		return -1;
}