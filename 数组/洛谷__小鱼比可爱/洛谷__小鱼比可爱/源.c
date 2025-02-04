#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n,i,x;
	scanf("%d", &n);
	int arr[101];
	for (i = 1; i <= n;i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("0 ");
	for (i = 2;i <= n;i++)
	{
		int count = 0;
		for (x = 1;x < i;x++)
		{
			if (arr[x] < arr[i])
			{
				count++;
			}
		}
		printf("%d ", count);
	}
	return 0;
}
