//Made by Ihor Paprotskyi, FI-2, SE, Group 1
#include "fib.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "- - - -Testing Quick Recursive Power- - - -" << endl;
	unsigned counter = 0;
    for (int i = -2; i < 2; i++)
    {
        for (unsigned int j = 0; j <= 3; j++)
        {
            cout << i << " pow " << j << " = " << power(i, j, counter) << endl;
            cout << "Number of calls: " << counter << endl;
            counter = 0;
        }
    }

	cout << "- - - -Testing Recursive Fibonacci- - - -" << endl;
	for (unsigned int x = 0; x < 10; x++)
    {
        cout << "Fibonacci[" << x << "]: " << Fibonaci(x, counter) << endl;
        cout << "calls:" << counter << endl;
        counter = 0;
    }

	cout << "- - - -Testing Quick Matrix Recursive Fibonacci- - - -" << endl;
	for (unsigned int n = 0; n < 10; ++n)
	{
		cout<<"- - - - n = "<<n<<" - - - -"<<endl;
		cout<<"Result: Fibonacci("<<n<<") = "<<quickFib(n)<<endl;
	}
		return 0;
}