#include "myInclude.h"
#include <iostream>
using namespace std;

int main(void)
{
	int n1 = 4;
	double x1 = 5.5;
	cout<<"Question 1: The sum with parameters: n = "<<n1<<", x = "<<x1<<" is "<<sum(n1,x1)<<endl;
	n1 = 10;
	x1 = 1.5;
	cout<<"Question 1: The sum with parameters: n = "<<n1<<", x = "<<x1<<" is "<<sum(n1,x1)<<endl;
	cout<<endl;
	
	double x2 = 0.5;
	double epsilon = 1e-9;
	cout<<"Question 2: The sum with parameters: x2 = "<<x2<<", epsilon = "<<epsilon<<" is "<<sinus(epsilon,x2)<<endl;
	x2 = 2;
	epsilon = 1e-2;
	cout<<"Question 2: The sum with parameters: x2 = "<<x2<<", epsilon = "<<epsilon<<" is "<<sinus(epsilon,x2)<<endl;
	cout<<endl;

	int x3 = 9;
	int y = 4;
	cout<<"Question 3: The result of the div("<<x3<<","<<y<<") is "<<division(x3,y)<<". The remainder is "<<remainder(x3,y)<<endl;
	x3 = 125;
	y = 23;
	cout<<"Question 3: The result of the div("<<x3<<","<<y<<") is "<<division(x3,y)<<". The remainder is "<<remainder(x3,y)<<endl;
	cout<<endl;

	int a = 125;
	int b = 20;
	cout<<"Question 4: The gcd of "<<a<<" and "<<b<<" is "<<gcd(a,b)<<endl;
	a = 18;
	b = 9;
	cout<<"Question 4: The gcd of "<<a<<" and "<<b<<" is "<<gcd(a,b)<<endl;
	cout<<endl;

	double x5 = 2;
	int n5 = 3;
	cout<<"Question 5: The answer of polinom Chebisheva with parameters: x = "<<x5<<", n = "<<n5<<" is "<<chebishev(x5,n5)<<endl;
	x5 = 1.5;
	n5 = 6;
	cout<<"Question 5: The answer of polinom Chebisheva with parameters: x = "<<x5<<", n = "<<n5<<" is "<<chebishev(x5,n5)<<endl;
	cout<<endl;

	cout<<"Roboty vykonav Ihor Paprotskyi"<<endl;
	cout<<endl;
	return 0;
}