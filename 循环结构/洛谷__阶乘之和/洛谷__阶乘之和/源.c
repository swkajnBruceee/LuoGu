#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int x = 1;
	int n;
	scanf("%d", &n);
	int ret = 1;
	long long sum = 0;
	for (x = 1; x <= n; x++)
	{
		ret = 1;
		for (i = 1; i <= x; i++)
		{
			ret = ret * i;
		}
		sum = sum + ret;
	}
	printf("%lld", sum);
	return 0;
}
