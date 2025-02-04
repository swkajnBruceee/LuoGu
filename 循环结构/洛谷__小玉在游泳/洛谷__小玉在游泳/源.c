#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i;
	double s;
	double x = 2.0;
	double len = 0.0;
	int count = 0;
	scanf("%lf", &s);
	for (i = 0; ;i++)
	{
		len += x;
		count++;
		if (len >= s)
		{
			printf("%d", count);
			break;
		}
		x *= 0.98;
	}
	
	return 0;
}
