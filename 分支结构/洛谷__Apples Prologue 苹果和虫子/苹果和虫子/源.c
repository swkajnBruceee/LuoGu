#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int m, t, s,a;
	scanf("%d%d%d", &m,&t,&s);
	if (t == 0)
	{
		printf("%d", 0);

	}
	else
	{
		a = (int)ceil((double)s / t);
		if ((m - a) > 0)
		{
			printf("%d", m - a);
		}
		else
		{
			printf("%d", 0);
		}
	}

	return 0;
}

