int division (int x, int y)
{
	if (y == 0) return 0;//exception
	int answer = 0;
	while (x >=y)
	{
		x -= y;
		answer ++;
	}
	return answer;
}

int remainder (int x, int y)
{
	if (y == 0) return 0; //exception
	while (x>=y)
	{
		x -=y;
	}
	return x;
}