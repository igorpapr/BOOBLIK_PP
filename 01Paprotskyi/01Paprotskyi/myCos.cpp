//Made by Ihor Paprotskyi, SE, FI-2, Group 1

#include <cmath>
// ( (-1)^(n+1) )*x^(2*(n+1))/(2*(n+1))! / (-1)^n * x^2n / (2n)! = (-1)*x^2 / (2*n-1)*(2*n)
// область визначення даної реалізації :
// x є (-35; 35)

double myCos(double x, double eps)
{
    double next = 1.0;
    double sum = 0.0;
    int i = 1;
    do
    {
        sum += next;
        next *= -(x * x)/((2*i -1)*(2*i));
        i++;
    }
    while (abs(next)> eps);
 
    return sum;
}
