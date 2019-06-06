//Made by Paprotskyi Ihor, SE, FI-2, NaUKMA
#include <cassert>
#include "functions.h"
#include "structures.h"

void destroy(WrappedWCHAR& w)
{
	delete [] w._arr; 
	w._arr=0;
	return;
}

WrappedWCHAR& toWideCharArr(const char* source)
{
	assert(source != 0);
	size_t length = charlen(source);
	WrappedWCHAR wwch = {length, length/3 + 1, new wchar_t[length/3 + 1]};
	for (size_t q = 0; q < (length/3)+1; ++q)
		wwch._arr[q] = 0;

	size_t i = 0;
	wchar_t x = 0;
	size_t charCounter = 0;
	size_t shift;
	for(size_t wchIndex = 0; wchIndex < wwch._n; ++wchIndex)
	{
		shift = 0;
		for (size_t j = 0; (j < 3)&&(source[i]!='\0'); j++, i++)
		{
			x = source[i];//97-122 : 'a' - 'z'
			x -= 96;
			x = x << 5 * j;
			wwch._arr[wchIndex] = wwch._arr[wchIndex] | x;
		}
	}
	return wwch;
}

char*& toCharArrFromWide(const WrappedWCHAR& source)		//task 7
{
	char* arr = new char[source._symbolsQuantity+1];
	wchar_t mask = 31;//11111
	wchar_t symb;
	size_t symbCounter = 0;
	for (size_t i = 0; i < source._n; i++)
	{
		for (size_t j = 0; j < 3 ; j++)
		{
			if (symbCounter >= source._symbolsQuantity)
				break;
			symb = (source._arr[i] >> (j*5)) & mask;
			symb += 96;
			arr[symbCounter] = symb;
			symbCounter++;
		}
	}
	arr[symbCounter] = '\0';
	return arr;
}

bool operator==(const WrappedWCHAR& a, const WrappedWCHAR& b)
{
	if (a._n != b._n)
		return false;
	else if (a._symbolsQuantity != b._symbolsQuantity)
		return false;
	for (size_t i = 0; i < a._n; i++)
	{
		if (a._arr[i] != b._arr[i])
			return false;
	}
	return true;
}

std::ostream& operator<<(std::ostream& os, const WrappedWCHAR& w)
{
	char* res = toCharArrFromWide(w);
	os<<res;
	delete[] res;
	return os;
}

WrappedWCHAR& operator+(WrappedWCHAR& a, WrappedWCHAR& b)
{
	size_t resLength = a._symbolsQuantity + b._symbolsQuantity;
	assert(resLength > 0);
	char* arrA = toCharArrFromWide(a);
	char* arrB = toCharArrFromWide(b);
	char* arrC = new char[resLength+1];
	size_t i = 0;
	while(arrA[i]!='\0')
	{
		arrC[i] = arrA[i];
		i++;
	}
	size_t j = 0;
	while(arrB[j]!='\0')
	{
		arrC[i] = arrB[j];
		i++;
		j++;
	}
	arrC[i] = '\0';

	WrappedWCHAR w = toWideCharArr(arrC);
	delete[] arrA;
	delete[] arrB;
	delete[] arrC;
	arrA = 0;
	arrB = 0;
	arrC = 0;
	return w;
}