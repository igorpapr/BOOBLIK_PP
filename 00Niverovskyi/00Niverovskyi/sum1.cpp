// task1
#include <iostream>

using namespace std;

//������� ��� ����������� ����
double sum1(int n, double x)
{
    double aSum = 0; //����
    double xk = 1; //���� ������
    for (int k = 0; k <= n; k++)
    {
        aSum += xk;
        xk *= -x / (k + 1); // ����������� ���������� �����
    }
    return aSum;
}

//������� ��� ����������
void testerSUM(int n, double x)
{
    cout << "Problem 1 : n = " << n << "; x = " << x << "; S = " << sum1(n, x) << endl;

}