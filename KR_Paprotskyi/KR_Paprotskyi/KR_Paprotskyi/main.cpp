//Made by Paprotskyi Ihor, SE, FI-2, NaUKMA
#include "task10.h"
#include "functions.h"
#include "structures.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
	srand(time(NULL));
	//task 1
	cout<<"= = = = = = = =TASK 1. ~(k-1)= = = = = = = ="<<endl;
		cout<<"-k"<<'\t'<<"~(k-1)"<<endl;
		cout<<"------------------"<<endl;
	for (int k = -1; k < 4; ++k)
		cout<<task1(k)<<'\t'<<~(k-1)<<endl;

	//task 2
	cout<<"\n= = = = = = = =TASK 2. Number of 0= = = = = = = ="<<endl;
	for (size_t i = 0; i < 5; ++i)
	{
		cout<<i<<":\t"<<numberOfNulls(i)<<endl;
	}
	
	//tasks 3-4
	cout<<"\n= = = = = = = =TASKS 3 and 4. Char* to SList and print it= = = = = = = ="<<endl;
	char* s = "this is a string";
	SList list = toSList(s);
	cout<<list;
	
	//task 5
	cout<<"\n= = = = = = = =TASK 5. SList to Char* = = = = = = = ="<<endl;
	char* resS = toCharArr(list);
	cout<<resS<<endl;
	destroy(list);
	delete[] resS;
	resS = 0;

	//task 6
	cout<<"\n= = = = = = = =TASKS 6-7. char* to wchar_t* = = = = = = = ="<<endl; 
	cout<<"Size of wchar_t in Windows OS is 2 bytes"<<endl;
	cout<<"So I compressed only 3 characters in one wchar_t"<<endl;
	cout<<"In GNU/Linux i would be able to compress 6 characters in one wchar_t"<<endl;
	cout<<"First char*"<<endl;
	char* a = "zxcvbnm";
	cout<<a<<endl;

	WrappedWCHAR wchar1 = toWideCharArr(a);
	char* resultChar = toCharArrFromWide(wchar1);
	
	cout<<"Back to char*"<<endl;
	cout<<resultChar<<endl;

	cout<<"Second char*"<<endl;
	char* a1 = "qwerty";
	cout<<a1<<endl;

	cout<<"wchar_t* representing first string:"<<endl;
	cout<<wchar1<<endl;
	WrappedWCHAR wchar2 = toWideCharArr(a1);
	cout<<"wchar_t* representing second string:"<<endl;
	cout<<wchar2<<endl;
	cout<<"Let's add them:"<<endl;
	WrappedWCHAR wchar3 = wchar1 + wchar2;
	cout<<wchar3<<endl;
	cout<<"Is first wchar_t* equal to result of adding?:"<<endl;
	(wchar1==wchar3)?(cout<<"true\n"):(cout<<"false\n");
	char* a2 = "zxcvbnm";
	WrappedWCHAR wchar4 = toWideCharArr(a2);
	cout<<"New wchar_t*:"<<endl;
	cout<<wchar4<<endl;
	cout<<"Is this wchar_t* equal to the first wchar_t*?"<<endl;
	(wchar1==wchar4)?(cout<<"true\n"):(cout<<"false\n");

	destroy(wchar1);
	destroy(wchar2);
	destroy(wchar3);
	destroy(wchar4);
	delete[] resultChar;
	resultChar = 0;
	
	//task 8
	cout<<"\n= = = = = = = =TASKS 8. Matrix to Vector = = = = = = = ="<<endl;
	WrappedMatrix m;
	constructMatrix(m);
	
	cout<<"Matrix m"<<endl;
	cout<<m<<endl;

	WrappedVector v = matrixToVector(m);
	cout<<"Matrix m as vector:"<<endl;
	cout<<v<<endl;
	destroy(m);
	destroy(v);

	cout<<"\n= = = = = = = =TASKS 9. Transpose, +=, *=, << = = = = = = = ="<<endl;
	WrappedVector k;
	constructVector(k);
	cout<<"Vector k"<<endl;
	cout<<k<<endl;

	WrappedVector t = -k;
	cout<<"Transposed matrix from vector k(in form of vectors)"<<endl;
	cout<<t<<endl<<endl;
	destroy(k);

	WrappedVector o;
	constructVector(o);
	cout<<"Vector o"<<endl;
	cout<<o<<endl;
	cout<<"Added matrixes (in form of vectors) o and transposed matrix"<<endl;
	o += t;
	cout<<o<<endl<<endl;
	
	cout<<"Multiplied matrix (in form of vectors) o by transposed"<<endl;
	o *= t;
	cout<<"Result vector"<<endl;
	cout<<o<<endl<<endl;

	destroy(o);
	destroy(t);

	cout<<"\n= = = = = = = =TASK 10. Calculator = = = = = = = ="<<endl;
	WrappedMatrix m1;
	constructMatrix(m1);
	WrappedMatrix m2;
	constructMatrix(m2);
	WrappedVector v1;
	constructVector(v1);
	WrappedVector v2;
	constructVector(v2);
	
	cout<<"-=ADDITION=-"<<endl;
	cout<<"Vector 1: "<<v1<<endl;
	cout<<"Vector 2: "<<v2<<endl;
	calculator(v1,v2,operator+=);
	cout<<"Result of '+=' operation - first vector:"<<endl;
	cout<<v1<<endl<<endl;
	
	cout<<"Matrix 1"<<endl;
	cout<<m1<<endl;
	cout<<"Matrix 2"<<endl;
	cout<<m2<<endl;
	
	calculator(m1,m2,operator+=);
	cout<<"Result of addition with assigning(+=):"<<endl;
	cout<<m1<<endl;

	cout<<"-=Multiplication=-"<<endl;
	cout<<"Vector 1: "<<v1<<endl;
	cout<<"Vector 2: "<<v2<<endl;
	calculator(v1,v2,operator*=);
	cout<<"Result of '*=' operation - first vector:"<<endl;
	cout<<v1<<endl<<endl;
	
	cout<<"Matrix 1"<<endl;
	cout<<m1<<endl;
	cout<<"Matrix 2"<<endl;
	cout<<m2<<endl;
	
	calculator(m1,m2,operator*=);
	cout<<"Result of multiplication with assigning(*=):"<<endl;
	cout<<m1<<endl;

	destroy(v1);
	destroy(v2);
	destroy(m1);
	destroy(m2);
	return 0;
}