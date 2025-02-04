#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	if (x > 1)
	{
		printf("Today, I ate %d apples.", x);
	}
	else
	{
		printf("Today, I ate %d apple.", x);
	}
	return 0;
}