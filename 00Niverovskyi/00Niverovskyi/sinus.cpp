// task2

#include <iostream>
#include <cmath>

using namespace std;

//������� ��� ����������� ����
double sinus(double x, double eps)
{
    double aSum = 0; //����
    double xk = x;  //���� ������
    double xprev;   //��������� ���� ������
    int k = 0;

    do
    {
        k++;
        aSum += xk;
        xprev = xk;
        xk *= -x * x / (2 * k + 3); // ����������� ���������� �����
    } while (abs(xk - xprev) > eps); // ��������, ��� ������ �� ������� ���� �� ������� ��������
    return aSum;
}

void testerSinus(double x, double eps)
{
    cout << "Problem 2 : x = " << x << "; eps = " << eps << "; S = " << sinus(x, eps) << endl;

}