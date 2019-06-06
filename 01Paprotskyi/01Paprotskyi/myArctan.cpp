//Made by Ihor Paprotskyi, SE, FI-2, Group 1
//arctan = sn[n=0;+inf] = (-1)^n * x^(2n+1) / 2n+1 , |x|<1

#include <cmath>

double myAtan(double x, double eps)
{
    double next=1;
    double sum, one, xPowered = x; // xPowered = pow(x,k)
	
    sum = 0;
    one = -1;
    int i = 0;
    while(abs(next)>eps)
    {
      int k = 2 * i + 1;
		one = -(one);

		for (int j=1; j < k; j ++)//j=1 ���� �� xPowered ��� = � ���� ���
		{
			xPowered *=x;    // = pow(x, k), ���� ��������������� ������ ����� ����� pow, �� ������ �������� �������� ��������� �� � �������� cmath
		}

		next = one * xPowered / k; //

		sum += next;
        i += 1;
    }
	return sum;
}

