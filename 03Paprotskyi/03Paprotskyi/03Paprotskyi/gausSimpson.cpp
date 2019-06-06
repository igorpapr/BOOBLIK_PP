//Made by Ihor Paprotskyi, SE, FI-2, group 1;

#include "includer.h" //for exponent
#include <cmath>

double gausSimpson (double x, double eps)
{
	if (x <0)
	{
		x = -x; //function is even
	}
	if (x==0)
		return 0;
	// b = x; a = 0;
	//h = (b - a)/2n (2n = nEven)

	//4th derivative (') of e^(-x^2) will be (e^(-x^2))*(12 - 48*x^2 + 16*x^4) , the maximum Y of this function is 12 on interval [0,x]  
	//and the formula of absolute fault (which means that we are looking for correct N (attached to eps stated before)) is
	// fault <= ( max|f(4')(x)| * (b-a)^5 ) / (2880*n^4)
	// ==>  n^4 >= ( max|f(4')(x)| * (b-a)^5 ) / (2880*fault)
	int nEven = static_cast<int>(sqrtFromPractice(4,x*x*x*x*x*12/(2880*eps),eps));
	nEven ++;//we add 1 because we need next int before 
	// nEven is even because it always must be 2*n(in formula)

	
	double sumOdd = 0; //members multiplied by 4
	double sumEven = 0; //members multiplied by 2
	double h = x / (2*nEven);
	
	for (int i = 1; i < 2*nEven; i +=2) 
	{	
		sumOdd += exponentUpgraded(-i*i*h*h, eps);
		sumEven += exponentUpgraded (-(i+1)*(i+1)*h*h, eps);  //we added the exp(-x^x,eps) twice on the last iteration here
	}

	return (h/3)*(exponentUpgraded(0,eps) + (4 * sumOdd) + (2 * sumEven) - exponentUpgraded(-x*x,eps)); //so we subtract one of them here
}