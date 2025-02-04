#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i,L,x;
	int sum = 2;
	int count = 1;
	scanf("%d", &L);
	printf("2\n");
	for (i = 3;;i++)
	{
		
			int t = 1;
			for (x = 2; x < i;x++)
			{

				if (i % x == 0)
				{
					t = 0;
					break;
				}
			}
			if (t == 1)
			{
				sum += i;
				
				if (sum > L)
				{
					break;
				}
				else
				{
					count++;
					printf("%d\n", i);
				}
					
				
			}
		
		
		
	}
	printf("%d", count);
	return 0;
}