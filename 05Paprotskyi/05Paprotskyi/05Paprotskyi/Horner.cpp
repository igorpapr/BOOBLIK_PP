//Made by Ihor Paprotskyi, FI-2, SE, Group 1
#include <random>
#include "Horner.h"
#include <cassert>

#include <iostream>
using namespace std;


void fillArray(double * coeff, size_t size)
{ 
	std::random_device rd;
	std::mt19937_64 gen(rd());
	std::uniform_real_distribution<double> dis(-50,50);
	//creating coeffs randomly from -50 to 50
	for(int i = 0; i < size; ++i)
    {
		coeff[i] = dis(gen);
	}

	cout<<"P(x) = ";
	size_t j = size-1;
	for(size_t i = 0; i < size-1; ++i, --j)
    {
		cout<<'('<< coeff[i] <<'*'<<"x^"<<j<<')'<<" + ";
	}
	cout<<'('<< coeff[size-1] <<'*'<<"x^"<<j<<')'<<endl;
	
}

double sum(double * coeff, size_t size, int sign)
{
	double sumResult = 0;
	int one = (size % 2==0 ? sign : 1);//if sign is odd we start from 1 for correct results
    
	for (unsigned int i = 0; i < size; ++i)
    {
		sumResult += coeff[i] * one;
		one*=sign;
	}

	cout<<"Sum result = "<<sumResult<<endl;
	return sumResult;
}

bool isEqual(double a, double b) //for comparison of double values
{
    return fabs(a - b) < 1e-13;
}

double Horner(double * coeff, size_t size, double x)
{
	assert(size >= 0);
	if (size == 0)
		return 0;

	fillArray(coeff,size);
	double result = coeff[0];

	for (int i = 1; i < size; ++i)
	{
		result = result * x + coeff[i];
	}
	assert(((x==1)||(x==-1))?(isEqual(result,sum(coeff, size, x))):true);
	return result;
}