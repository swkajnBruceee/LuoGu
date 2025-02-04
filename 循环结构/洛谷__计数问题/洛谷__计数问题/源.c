#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n,x,a,b,c;
	int i = 1;
	int count = 0;
	scanf("%d%d", &n, &x);
	for (i = 1;i <= n;i++)
	{
		a = i;//为了不改变i的值
		while (a != 0)
		{
			b = a % 10;
			a = a / 10;
			if (b == x)
			{
				count++;
			}
		}


	}
	printf("%d", count);
	return 0;
}