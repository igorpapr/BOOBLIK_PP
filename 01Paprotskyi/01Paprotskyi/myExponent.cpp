//Made by Ihor Paprotskyi, SE, FI-2, Group 1
//exp = 1+x/1!+x^2/2!+…+x^n/n!
// x^(n+1)/(n+1)! / x^n/n! = x / n+1
// область визначення даної реалізації:
// x є (-15; 709.782) 

//використав лише модуль
#include <cmath>

double exponent(double x,double eps)
{
    double sum=1;
    double n=1;
    double next=1; //наступний доданок
    while (true)
    {
        next*= x/n;
        if (abs(next) <= eps) break;
        sum+=next;
        n++;
    }
    return sum;
}

double exponentN(double x, int n)
{
    double sum = 0,step = 1;
    for(int i = 1; i <= n; ++i)
    {
        sum += step;
        step *= x / i;
    }
    return  sum;
}
