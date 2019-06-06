//gcd(m,m) = m
//gcd(m,m+n) = gcd(m,n)


int gcd(int a, int b)
{
	if (a == 0 || b == 0)
		{
			return a >= b ? a : b;
		}
	return a>b ? gcd (a-b,a) : gcd (a, b-a);
}