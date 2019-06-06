//Made by Paprotskyi Ihor, SE, FI-2, NaUKMA
#include "structures.h"
#include "constants.h"
#include <stdlib.h>
#include <cassert>

//using namespace std;

std::ostream& operator<<(std::ostream& os, const WrappedMatrix& m)
{
	for (size_t i = 0; i < m._degree; ++i)
	{
		for (size_t j = 0; j < m._degree; ++j)
		{
			os << m._matrix[i][j] <<"  ";
		}
		os<<"\n\n";
	}
	return os;
}
std::ostream& operator<<(std::ostream& os, const WrappedVector& v)
{
	for (size_t i = 0; i < v._n; ++i)
	{
		os << v._vector[i] <<' ';
	}
	return os;
}

void initMatrix(WrappedMatrix& m)
{
	assert(m._degree > 0);
	m._matrix = new int*[m._degree];
	for (size_t index = 0; index < m._degree; ++index)
	{
		m._matrix[index] = new int[m._degree];
		for (size_t i = 0; i < m._degree; ++i)//each row
		{
			m._matrix[index][i] = 0;
		}
	}
	return;
}

void constructMatrix(WrappedMatrix& m)
{
	initMatrix(m);

	for (size_t i = 0; i < m._degree; ++i)
		for (size_t j = 0; j < m._degree; ++j)			
			m._matrix[i][j] = (rand() % 50) - 25;
	return;
}
void constructVector(WrappedVector& v)
{
	v._vector = new int[v._n];

	for (size_t i = 0; i < v._n; ++i)
		v._vector[i] = rand() % 50 - 25;
	return;
}

WrappedVector& matrixToVector(const WrappedMatrix& m)
{
	WrappedVector v;
	v._vector = new int[v._n];

	for (size_t i = 0; i < m._degree; ++i)
		for (size_t j = 0; j < m._degree; ++j)
			v._vector[i*m._degree+j] = m._matrix[i][j];
	return v;
}

WrappedMatrix& vectorToMatrix(const WrappedVector& v)
{
	WrappedMatrix m;
	initMatrix(m);
	for (size_t i = 0; i < m._degree; ++i)
		for (size_t j = 0; j < m._degree; ++j)
			m._matrix[i][j] = v._vector[i*m._degree+j];
	return m;
}

void clear(WrappedMatrix& m)
{
	for (size_t i = 0; i < m._degree; ++i)
	{
		delete [] m._matrix[i]; 
		m._matrix[i]= 0;
	}
	delete[] m._matrix;
	return;
}
void destroy(WrappedMatrix& m) {
	clear(m);
	m._matrix = 0;
	return;
}

void destroy(WrappedVector& u) {
	delete [] u._vector; 
	u._vector=0;
	return;
}

void rswap(int& x, int& y) {
	int z=x; x=y; y=z;
	return;
}

WrappedVector& operator-(WrappedVector& source) //transpose matrix as vectors	//9 a)
{
	WrappedMatrix temp = vectorToMatrix(source);
	
	for (size_t i = 0; i < temp._degree; ++i)
		for (size_t j = i+1; j < temp._degree; ++j)
			rswap(temp._matrix[i][j], temp._matrix[j][i]);
	
	WrappedVector res = matrixToVector(temp);
	destroy(temp);
	return res;
}

void operator+=(WrappedVector& a, const WrappedVector& b) //addition of vectors		//9 á)
{
	for (size_t i = 0; i < WrappedVector::_n; ++i)
		a._vector[i] += b._vector[i];
	return;
}
void operator+=(WrappedMatrix& a, const WrappedMatrix& b) //addition of matrix
{
	for (size_t i = 0; i < WrappedMatrix::_degree; ++i)
		for (size_t j = 0; j < WrappedMatrix::_degree; ++j)
			a._matrix[i][j] += b._matrix[i][j];
	return;
}

void operator*=(WrappedMatrix& a, const WrappedMatrix& b) //multiplication of matrixes
{
	WrappedMatrix res;
	initMatrix(res);
	for (size_t i = 0; i < WrappedMatrix::_degree; ++i)
	{
		for (size_t j = 0; j < WrappedMatrix::_degree; ++j)
		{
			for (size_t k = 0; k < WrappedMatrix::_degree; ++k)
			{
				res._matrix[i][j] += a._matrix[i][k] * b._matrix[k][j];
			}
		}
	}
	clear(a);
	a = res;
	res._matrix = 0;
	return;
}

void operator*=(WrappedVector& a, const WrappedVector& b) //multiplication of matrixes as vectors	//9 a)
{
	WrappedMatrix m1 = vectorToMatrix(a);
	WrappedMatrix m2 = vectorToMatrix(b);
	m1 *= m2;
	delete [] a._vector; 
	a = matrixToVector(m1);
	destroy(m1);
	destroy(m2);
	return;
}