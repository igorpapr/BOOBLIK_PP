//Made by Ihor Paprotskyi, FI-2, SE, Group 1

//#define NDEBUG

#include <cassert>
#include "fibMatrix.h"


//muliply two matrix2x2 by each other
Matrix2x2 matrix2x2Mult(Matrix2x2 a, Matrix2x2 b)
{
	Matrix2x2 res;
	res._11 = a._11 * b._11 + a._12 * b._21;
    res._12 = a._11 * b._12 + a._12 * b._22;
    res._21 = a._21 * b._11 + a._22 * b._21;
    res._22 = a._21 * b._12 + a._22 * b._22;
	return res;
}

//multiply matrix2x2 by vector2x1
Vector2 matrixVectorMult(Matrix2x2 m, Vector2 v)
{
	Vector2 res;
	res._1 = m._11 * v._1 + m._12 * v._2;
	res._2 = m._21 * v._1 + m._22 * v._2;
	return res;
}

Matrix2x2 quickMatrixPower(Matrix2x2 x, size_t n)
{
	Matrix2x2 result={1,0,0,1};
	if (n == 0)
	{
		return result;
	}
	
	while(n>1)
	{
		if(!(n & 1))
		{
			n = n >> 1;
			x = matrix2x2Mult(x,x);
		}
		else
		{
			n --;
			result = matrix2x2Mult(result,x);
		}
	}
	result = matrix2x2Mult(result,x);
	return result;
}

#ifndef NDEBUG
	int fibCheck(int n)
	{
		if(n == 0) 
			return 0;
		if(n == 1) 
			return 1;
		return fibCheck(n-1) + fibCheck(n - 2);
	}
#endif

int fibonacci(size_t n)
{
	assert(n > 0);
	Vector2 v = {1, 0};
	Matrix2x2 m = {1, 1, 1, 0};
	m = quickMatrixPower(m, n - 1);
	Vector2 resVector = matrixVectorMult(m, v);
	int result = resVector._1;
	assert(result == fibCheck(n));
	return result;
}