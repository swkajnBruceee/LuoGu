#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n, local, luogu;
	scanf("%d", &n);
	local = n * 5;
	luogu = 11 + n * 3;
	if (local < luogu)
	{
		printf("Local");
	}
	else
	{
		printf("Luogu");
	}

	return 0;
}