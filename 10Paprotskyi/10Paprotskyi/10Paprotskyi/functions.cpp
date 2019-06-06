//Made by Ihor Paprotskyi, Group 1, NaUKMA, FI-2, SE
#include "constants.h"
#include "functions.h"
#include <cmath>
#include <cassert>
#include <iostream>
using namespace std;

double simpson (CFuncDouble f, const double& left, const double& right, const double& eps)
{
   int n = 2;
   double h	 = (right - left) * 0.5;
   double ss = 0;
   double s1 = h * (f(left) + f(right));
   double s2 = 0;
   double s4 = 4 * h * f(left + h);
   double s  = s1 + s2 + s4;
   do {
      ss = s;
      n *= 2;
      h /= 2;
      s1 *= 0.5;
      s2 = 0.5 * s2 + 0.25 * s4;
      s4 = 0;
      int i = 1;
      do {
         s4 = s4 + f(left + i * h);
         i += 2;
      }
      while(i <= n);
      s4 = 4 * h * s4;
      s = s1 + s2 + s4;
   }
   while(fabs(s - ss) > eps);
   return s / 3;
}

double sgn(const double& data)
{
	return (data>0)?((data!=0)? 1.0 : 0) : -1.0;
}

double ariGeom(const double& srcA, const double& srcB)
{
	assert ((0 < srcA) && (srcA < srcB));//0 < a < b
	double an = sqrt(srcA * srcB);
	double bn = (srcA + srcB) * 0.5;
	double pa = srcA;
	double pb = srcB;
	do
	{
		pa = an;
		pb = bn;
		an = sqrt(pa * pb);
		bn = (pa + pb) * 0.5;
	}
	while((pa < an) && (an < bn) && (bn < pb));
	return an;
}

double elliptical_equals()
{
	double res = PI/(2*ariGeom(a,b));
	cout<<"PI/2 * M(a,b) =\t\t\t\t"<<res<<endl;
	return res;
}
double f1(const double& x)
{
    return 1 / sqrt(a * a * sin(x) * sin(x) + b * b * cos(x) * cos(x));
}
double elliptical_integral()
{
	double result = simpson(f1, 0, PI/2, eps);
	assert (abs(result - elliptical_equals()) <= eps);
	cout<<"Calculated using Simpson method:";
	return result;
}

double dirichlet_equals()
{
	double res = PI/2 * sgn(a);
	cout<<"PI/2*sgn(a) =\t\t\t\t"<<res<<endl;
	return res;
}
double f2(const double& x)
{
	return sin(a * x) / x;
}
double dirichlet_integral()
{
	double res = simpson(f2, 0.000000001, inf, eps);//we use 0.000...1 instead of 0 because sin(a*0) / 0 = infinity
	assert(abs(res - dirichlet_equals()));
	cout<<"Calculated using Simpson method:";
	return res;
}

double poisson_equals()
{
	double res = sqrt(PI)/2;
	cout<<"sqrt(PI)/2 =\t\t\t\t"<<res<<endl;
	return res;
}
double f3(const double& x)
{
	return exp(-x*x);
}
double poisson_integral()
{
	double res = simpson(f3, 0, inf, eps);
	assert(abs(res - poisson_equals()));
	cout<<"Calculated using Simpson method:";
	return res;
}

double euler_equals()
{
	double res = PI/sin(a*PI);
	cout<<"PI/sin(a*PI) =\t\t\t\t"<<res<<endl;
	return res;
}
double f4(const double& x)
{
    return pow(x, a - 1) / (1 + x);
}
double euler_integral()
{
	double res = simpson(f4, 0.0001, 1000, eps);
	assert(abs(res - euler_equals()));
	cout<<"Calculated using Simpson method:";
	return res;
}