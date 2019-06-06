//author Niverovskyi Mykyta
//Exponential x = e^x x = (-15, +inf)
#include <iostream>
#include <cmath>

using namespace std;

double expon(double x, double eps)
{
    double sum = 0;
    double prevSum;
    double step = 1;
    int n = 1;
    do
    {
        prevSum = sum;
        sum += step;
        step *= x / n;
        n++;
    } while(abs(sum - prevSum) >= eps);
    return sum;
}

void testerExp(double x, double eps)
{
    cout << "\nExponential(x) \nx = " << x << ";\nStandart e(x) = " << exp(x) <<";\nMy function e(x) = " <<expon(x,eps)<<  endl;

}