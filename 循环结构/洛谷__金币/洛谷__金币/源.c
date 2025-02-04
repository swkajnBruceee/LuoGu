#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int k,i;
	int j = 1;//代表延续的天数
	int money = 1;
	int sum = 0;
	scanf("%d", &k);
	for (i = 1;i <= k;i++)
	{
		
		
		sum += money;
		j--;
		
			
		if (j == 0)
		{
			money++;
			j = money;
		}
		
	}
	printf("%d", sum);
	return 0;
}
