#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	double s = 0.0;
	int k;
	int n = 1;
	scanf("%d", &k);
	for (n = 1;;n++)
	{
		s += 1.0 / n;
		if (s > k*1.0)
		{
			
			break;
		}
		
	}
	printf("%d", n);
	return 0;
}