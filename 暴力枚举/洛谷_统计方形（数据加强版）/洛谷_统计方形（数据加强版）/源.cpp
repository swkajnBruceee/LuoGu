#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	long long n, m, c,k;
	int num_chang = 0;
	int num_zheng = 0;
	scanf("%lld%lld", &n, &m);
	long long min = n;
	if (m < min)
	{
		min = m;
	}
	for (c = 1;c <= min;c++)
	{
		num_zheng += (m - c + 1) * (n - c + 1);
	}
	for (c = 1;c <= m;c++)
	{
		for (k = 1;k <= n;k++)
		{
			num_chang += (m - c + 1) * (n - k + 1);
		}
	}
	num_chang = num_chang - num_zheng;
	printf("%d %d", num_zheng, num_chang);
	return 0;
}