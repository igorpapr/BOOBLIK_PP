//Made by Paprotskyi Ihor, SE, FI-2, NaUKMA
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include "structures.h"

int task1 (int);						//1
size_t numberOfNulls(unsigned int);		//2
SList& toSList(const char*);			//3
char*& toCharArr(const SList&);	//5
WrappedWCHAR& toWideCharArr(const char*); //6
char*& toCharArrFromWide(const WrappedWCHAR&);//6

size_t charlen(const char*);
WrappedVector& matrixToVector(const WrappedMatrix&);//8
WrappedMatrix& vectorToMatrix(const WrappedVector&);

#endif