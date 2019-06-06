//Made by Ihor Paprotskyi, FI-2, SE, group 1
#include <cassert>

double root (double x)
{
	double s = 0.5*x;
	double t;
	do
	{
		t=s;
		s=(s+x/s)*0.5;
	}
	while (s!=t);
	return s;
}

double ariGeom(double a, double b)
{
	assert ((0 < a) && (a < b));//0 < a < b
	double an = root(a * b);
	double bn = (a + b) * 0.5;
	double pa = a;
	double pb = b;
	do
	{
		pa = an;
		pb = bn;
		an = root(pa * pb);
		bn = (pa + pb) * 0.5;
	}
	while((pa < an) && (an < bn) && (bn < pb));
	return an;
}