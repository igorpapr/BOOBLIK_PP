//Made by Paprotskyi Ihor, SE, FI-2, Group 1
using namespace std;

double power(double x, int n)
{
	int powerCounter = 0;
	if (n == 0) 
		return 1;

	double result;
	
	if (n < 0)
	{
		n = -n;
		x = 1/x;
	}
	
	result = x;
	for (int i=0;i<n-1;i++)
	{
		result *= x;
		powerCounter++;
	}
	return result;
}
