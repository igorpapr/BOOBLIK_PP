// task2

#include <iostream>
#include <cmath>

using namespace std;

//Функція для обрахування суми
double sinus(double x, double eps)
{
    double aSum = 0; //Сума
    double xk = x;  //Член виразу
    double xprev;   //Попередній член виразу
    int k = 0;

    do
    {
        k++;
        aSum += xk;
        xprev = xk;
        xk *= -x * x / (2 * k + 3); // Знаходження наступного члена
    } while (abs(xk - xprev) > eps); // Перевірка, щоб різниця між членами була із заданою точністтю
    return aSum;
}

void testerSinus(double x, double eps)
{
    cout << "Problem 2 : x = " << x << "; eps = " << eps << "; S = " << sinus(x, eps) << endl;

}