// task4
#include <iostream>

using namespace std;

//������� ��� ����������� ���
int gcd(int i, int j)
{
    return j == 0 ? i : gcd(j, i % j);
}

//������� ��� ����������

void testerGCD(int i, int j)
{
    cout << "Problem 4 : GCD (" << i << ", " << j << ") = " << gcd(i, j) << endl;
}