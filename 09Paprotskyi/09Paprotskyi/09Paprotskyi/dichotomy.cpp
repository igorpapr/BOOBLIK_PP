//Made by Ihor Paprotskyi, Group 1, NaUKMA, FI-2, SE
#include "dichotomy.h"
#include <cassert>
#include <cmath>
//#define NDEBUG

//with accuracy of eps value, we can propose a given value to be closely equal to 0 
bool isNearlyEqualTo0(const double& value, const double& eps)
{
	return fabs(value) < eps;
}

double dichotomy (ConstFunc f, const double& a, const double& b, const double& eps)
{
	double fa = f(a);
	double fb = f(b);
	if (isNearlyEqualTo0(fa,eps))
		return a;
	else if (isNearlyEqualTo0(fb,eps))
		return b;
	assert(fa * fb < 0);
	
	double lo = a, hi = b;
	while(fabs(hi - lo) > eps) {
		if(f(lo) * f(0.5 * (lo + hi)) <= 0)
			hi = 0.5 * (lo + hi);
		else
			lo = 0.5 * (lo + hi);
	}
	return lo;
}