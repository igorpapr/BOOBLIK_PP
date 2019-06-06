// task1
#include <iostream>

using namespace std;

//Функція для обрахування суми
double sum1(int n, double x)
{
    double aSum = 0; //Сума
    double xk = 1; //Член виразу
    for (int k = 0; k <= n; k++)
    {
        aSum += xk;
        xk *= -x / (k + 1); // Знаходження наступного члена
    }
    return aSum;
}

//Функція для тестування
void testerSUM(int n, double x)
{
    cout << "Problem 1 : n = " << n << "; x = " << x << "; S = " << sum1(n, x) << endl;

}