//Sn = sum[k=0 -> n] ( (-1)^k * x^k / k!), n>=0

// delta = ( (-1)^(k+1)*x^(k+1)/k+1! ) / ( (-1)^k*x^k/k!) = (-1) * x / k + 1

double sum(int n, double x)
{
	double sum = 0;
	double temp = 1;

	for (int k=0; k<=n; k++)
	{
		sum +=temp;
		temp = temp * (-x) / (k+1);
	}
	
	return sum;

}