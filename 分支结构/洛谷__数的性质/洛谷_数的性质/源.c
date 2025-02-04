#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int x;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	scanf("%d", &x);
	if (x % 2 == 0 && x > 4 && x < 13)
	{
		a = 1;
	}
	
	if (x % 2 == 0 || (x > 4 && x < 13) || (x % 2 == 0 && x > 4 && x < 13))
	{
		b = 1;
	}
	if ((x%2 == 0 && (x < 5 || x >12))|| (x%2 != 0 && (x > 4 && x < 13)))
	{
		c = 1;
	}
		
	if (x % 2 != 0 && (x < 5 || x > 12))
	{
		d = 1;
	}
	printf("%d %d %d %d", a, b, c, d);
	

	return 0;
}
