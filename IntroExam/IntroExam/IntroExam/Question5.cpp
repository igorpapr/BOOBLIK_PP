double chebishev(double x, int n)
{
	if (n == 0) 
		return 1;
	if (n == 1)
		return x;
	double temp = x; //попередній
	double previousTemp = 1;//попередній попереднього
	double answer; //поточний член
	for (int i=2;i<=n;i++)
	{
		answer = 2 * x * temp - previousTemp;
		previousTemp = temp;
		temp = answer;
	}
	return answer;

}