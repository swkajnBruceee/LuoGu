#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n, k,i;
	int a1 = 0;
	int a2 = 0;
	int count1 = 0;
	int count2 = 0;
	scanf("%d%d", &n, &k);
	int arr1[10000];
	int arr2[10000];
	for (i = 1;i <= n; i++)
	{
		if (i % k == 0)
		{
			a1 += i;
			count1++;
		}
		else
		{
			a2 += i;
			count2++;
		}
		
	}
	double x1, x2;
	x1 = (double)a1 / count1;
	x2 = (double)a2 / count2;
	printf("%.1lf %.1lf", x1, x2);
	return 0;
}
