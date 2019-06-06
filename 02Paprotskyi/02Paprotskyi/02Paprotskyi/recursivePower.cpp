//Made by Paprotskyi Ihor, SE, FI-2, Group 1

double recursivePower(double x, int n)
{   
	if (n == 0) 
		return 1;
    
	if(n < 0)
    {
        n = -n;
        x = 1/x;
    }
	
	return x * recursivePower(x, n - 1);
	
}