//Made by Ihor Paprotskyi, SE, FI-2, Group 1

#include "includer.h"
#include <cmath>

#include <iostream>
using namespace std;

int main(void)
{
	// exponent
	//область визначення даної реалізації: x є (-15; 709.782)
	double x = 709.782;//крайнє праве значення в даній реалізації: 709.782
	double eps = 1e-9;
	int n = 650;
	cout <<"The exponent with x = "<<x<<" and eps = "<<eps<<" is "<<exponent(x,eps)<<endl;
	cout <<"The exponent with x = "<<x<<" and n = "<<n<<" is "<<exponentN(x,n)<<endl;
	cout <<"The exponent from cmath lib: "<<exp(x)<<endl;
	x = -15;//крайнє ліве значення в даній реалізації: -15, при якому результати точні
	eps = 1e-9;
	cout <<"The exponent with x = "<<x<<" and eps = "<<eps<<" is "<<exponent(x,eps)<<endl;
	cout <<"The exponent from cmath lib: "<<exp(x)<<endl;
	x = 0;
	eps = 1e-9;
	cout <<"The exponent with x = "<<x<<" and eps = "<<eps<<" is "<<exponent(x,eps)<<endl;
	cout <<"The exponent from cmath lib: "<<exp(x)<<endl;
	cout <<endl;


	// cosinus
	//область визначення даної реалізації:
	// x є (-35 ;35);
	double x1 = 35;//
	double eps1 = 1e-25;
	cout <<"The cos with x = "<<x1<<" and eps = "<<eps1<<" is "<<myCos(x1,eps1)<<endl;
	cout <<"Cos with the cos function from cmath lib: "<< cos(x1)<<endl;
	x1 = 0;//
	eps1 = 1e-25;
	cout <<"The cos with x = "<<x1<<" and eps = "<<eps1<<" is "<<myCos(x1,eps1)<<endl;
	cout <<"Cos with the cos function from cmath lib: "<< cos(x1)<<endl;
	
	x1 = -35;//
	eps1 = 1e-25;
	cout <<"The cos with x = "<<x1<<" and eps = "<<eps1<<" is "<<myCos(x1,eps1)<<endl;
	cout <<"Cos with the cos function from cmath lib: "<< cos(x1)<<endl;
	cout<<endl;

	//arctg, x є (-1;1)
	double x2 = -0.99;
	double eps2 = 1e-9;
	cout <<"The atan with x = "<<x2<<" and eps = "<<eps2<<" is "<<myAtan(x2,eps2)<<endl;
	cout <<"Atan with the atan function from cmath lib: "<< atan(x2)<<endl;
	x2 = 0;
	eps2 = 1e-9;
	cout <<"The atan with x = "<<x2<<" and eps = "<<eps2<<" is "<<myAtan(x2,eps2)<<endl;
	cout <<"Atan with the atan function from cmath lib: "<< atan(x2)<<endl;
	x2 = 0.5;
	eps2 = 1e-9;
	cout <<"The atan with x = "<<x2<<" and eps = "<<eps2<<" is "<<myAtan(x2,eps2)<<endl;
	cout <<"Atan with the atan function from cmath lib: "<< atan(x2)<<endl;
	x2 = 0.99;
	eps2 = 1e-9;
	cout <<"The atan with x = "<<x2<<" and eps = "<<eps2<<" is "<<myAtan(x2,eps2)<<endl;
	cout <<"Atan with the atan function from cmath lib: "<< atan(x2)<<endl;
	cout <<endl;
}