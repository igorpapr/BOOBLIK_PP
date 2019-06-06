//Made by Paprotskyi Ihor, SE, FI-2, Group 1


double quickPower(double x, int n)
{
	int quickCounter = 0;

	if (n==0) 
		return 1;
	
	double result = 1;
	
	if (n<0)
	{
		n = -n;
		x = 1/x;
	}

	while(n>1)
	{
		quickCounter ++;
		if(!(n & 1))
		{
			n = n >> 1;
			x *= x;
		}
		else
		{
			n --;
			result *= x;
		}
	}
		
	result*=x;
	return result;
}
