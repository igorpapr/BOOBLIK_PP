//Made by Paprotskyi Ihor, SE, FI-2, Group 1

double quickRecursivePower(double x, int n)
{
    double result;
    if (n == 0) 
		return 1;
	
	if (n<0)
	{
		n = -n;
		x = 1/x;
	}

	if (!(n & 1))
	{
		result = quickRecursivePower(x, n >> 1);
		return result * result;
	} 
	else 
		return x * quickRecursivePower(x, n - 1);
}