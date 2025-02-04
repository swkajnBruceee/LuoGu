#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n,j,m,i = 1;
	
	scanf("%d", &n);
	int arr[1001];
	m = n;
		while (n > 1)
		{
			
			if (n % 2 == 0)
			{
				n /= 2;
			}
			else
			{
				n = n * 3 + 1;
			}
			arr[i] = n;
			i++;
		}
		
		
	for (j = i - 1;j > 0;j--)
	{
		printf("%d ", arr[j]);
	}
	printf("%d", m);
	return 0;
}
