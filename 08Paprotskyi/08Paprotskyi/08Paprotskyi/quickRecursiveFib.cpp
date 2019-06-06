//Made by Ihor Paprotskyi, FI-2, SE, Group 1

//#define NDEBUG
#include <cassert>
#include <iostream>
#include "fib.h"

//multiply two matrix2x2 by each other
const Matrix2x2 matrix2x2Mult(const Matrix2x2& a, const Matrix2x2& b)
{
	Matrix2x2 res;
	res._11 = a._11 * b._11 + a._12 * b._21;
    res._12 = a._11 * b._12 + a._12 * b._22;
    res._21 = a._21 * b._11 + a._22 * b._21;
    res._22 = a._21 * b._12 + a._22 * b._22;
	return res;
}

//multiply matrix2x2 by vector2x1
const Vector2 matrixVectorMult(const Matrix2x2& m, const Vector2& v)
{
	Vector2 res;
	res._1 = m._11 * v._1 + m._12 * v._2;
	res._2 = m._21 * v._1 + m._22 * v._2;
	return res;
}

//additional function for quickMatrixPower
void addFuncPower(Matrix2x2 &result, Matrix2x2 &x, size_t &k, size_t &count)
{
	count++;
	if (k > 0)
	{
		if (k%2==1)
		{
			result = matrix2x2Mult(result, x);
			k--;
		}
		else
		{
			x = matrix2x2Mult(x,x);
			k /= 2;
		}
		addFuncPower(result,x,k,count);    //recursion
	}
	return;
}

Matrix2x2 quickMRecursivePow(Matrix2x2& x, size_t n)
{
	Matrix2x2 res={1,0,0,1};
	size_t counter = 0;
	addFuncPower(res, x, n, counter);
	std::cout<<"QuickPower(matrix) calls: "<<counter<<std::endl;
	return res;
}

int quickFib(size_t n)
{
	if (n == 0)
		return 0;

	Vector2 v = {1, 0};
	Matrix2x2 m = {1, 1, 1, 0};
	
	Vector2 resVector = matrixVectorMult(quickMRecursivePow(m, n - 1), v);
	int result = resVector._1;

	unsigned int calls = 0;
	assert(result == Fibonaci(n, calls));
	std::cout<<"Assertion recursive Fibonacci calls: "<<calls<<std::endl;
	return result;
}