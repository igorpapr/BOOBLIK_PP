//Made by Ihor Paprotskyi, 1 group
double funct(double x, unsigned int n)
{
	double a = 1;
	double b = 1;
	double y = 1;
	for (unsigned i = 0; i < n; i++)
	{
		b = b * a * a *x;
		a *= x;
		y+=b;
	}
	return y;
}