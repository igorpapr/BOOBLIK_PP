//Made by Paprotskyi Ihor, SE, FI-2, NaUKMA
#ifndef STRUCTURES_OPERATORS_H
#define STRUCTURES_OPERATORS_H
#include <iostream>

struct SList					//arraylist			  //3-5
{
	char** _words;
	const size_t _wordsQuantity;
};

struct WrappedMatrix
{
	static const size_t _degree;
	int** _matrix;
};
struct WrappedVector
{
	static const size_t _n;
	int* _vector;
};
struct WrappedWCHAR
{
	const size_t _symbolsQuantity;
	const size_t _n;//words quantity
	wchar_t* _arr;
};

void constructMatrix(WrappedMatrix&);	  //8-10
void constructVector(WrappedVector&);

void destroy(SList&);
void destroy(WrappedMatrix&);
void destroy(WrappedVector&);
void destroy(WrappedWCHAR&);

WrappedVector& operator-(WrappedVector&);//transposition
void operator+=(WrappedMatrix& a, const WrappedMatrix& b); //addition of matrix
void operator*=(WrappedMatrix& a, const WrappedMatrix& b); //multiplication of matrixes
void operator+=(WrappedVector& a, const WrappedVector& b); //addition of vectors					//9 - á)
void operator*=(WrappedVector& a, const WrappedVector& b); //multiplication of matrixes as vectors	//9 - a)
bool operator==(const WrappedWCHAR& a, const WrappedWCHAR& b); //6 - á)
WrappedWCHAR& operator+(WrappedWCHAR& a, WrappedWCHAR& b);//6 - â)

std::ostream& operator<<(std::ostream&, const SList&); //4
std::ostream& operator<<(std::ostream&, const WrappedMatrix&);
std::ostream& operator<<(std::ostream&, const WrappedVector&);
std::ostream& operator<<(std::ostream&, const WrappedWCHAR&);	//6 - a)

#endif