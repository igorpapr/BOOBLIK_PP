//author Niverovskyi Mykyta
//Power x = x^n x = (-inf, +inf)
#include <iostream>
#include <cmath>

using namespace std;

double powerX(double x, int n)
{
    double x1 = x;
    if (n >= 0)
    {
        for (int i = 1; i < n; i++)
            x *= x1;

        return (n == 0) ? 1 : x;
    }
    n = -n;
    x=1/x;
    for (int i = 1; i < n; i++)
        x *= 1 / x1;

    return x;
}

void testerPower(double x, int n) {
    cout << "\nx^n \nx = " << x << "\nn = " << n << ";\nStandart x^n = " << pow(x, n) << ";\nMy function x^n = " << powerX(x, n) << endl;

}