// task3
#include <iostream>

using namespace std;

//������� ��� ����������� ���� �������
int dModI(int i, int j)
{
    int a = 0;
    if (j == 0)
        return 0;
    while (i >= j) // ³������ �� ��� ������� ����� �-����, ���� ��� ������� �� ���� ����� �� �����
    {
        i -= j;
        a++;
    }
    return a; // ��������� �
}

//������� ��� ����������� �������
int dModR(int i, int j)
{
    if (j == 0)
        return 0;
    while (i >= j) // ³������ �� ��� ������� �����, ���� ��� ������� �� ���� ����� �� �����
        i -= j;
    return i; // ��������� �, ��� � ���� ��������
}
//������� ��� ����������

void testerDMod(int i, int j)
{
    cout <<"Problem 3 : "<<  i << " DIVIDE " << j << "; Integer = " << dModI(i, j) << "; Remainder = " << dModR(i, j) << endl;

}