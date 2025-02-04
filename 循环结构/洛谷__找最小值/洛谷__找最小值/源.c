#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()

{
	int n,i;
	
	scanf("%d", &n);
	
	int arr[1000];
	for (i = 0; i < n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	int min = arr[0];
	for (i = 1;i < n;i ++)
	{
		
		if (arr[i] < min)
		{
			
			min = arr[i];
			
		}
		
	}
	printf("%d", min);
	return 0;
}
