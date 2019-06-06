//author Niverovskyi Mykyta
//Cosine x = cos(x) x = [-30, 30]
#include <iostream>
#include <cmath>

using namespace std;

double cosine(double x, double eps)
{
    double sum = 1, prevSum, step = 1;
    int n = 1;
    do
    {
        prevSum = sum;
        step *= - x * x / ((2 * n - 1) * (2 * n));
        sum += step;
        n++;
    }
    while(abs(sum - prevSum) >= eps);
    return sum;

}
void testerCos(double x, double eps)
{
    cout << "\nCosine(x) \nx = " << x << ";\nStandart cos(x) = " << cos(x) <<";\nMy function cos(x) = " <<cosine(x,eps)<<  endl;

}