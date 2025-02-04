#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


 int ifRunnian(int n)
{
	return ("%d", ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0) ? 1 : 0));

}


int main()
{
	int year, month,ret;
	scanf("%d%d", &year, &month);
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		printf("31");

	}
	if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		printf("30");

	}
	if (month == 2)
	{
		
		 ret = ifRunnian(year);
		if (ret == 1)
		{
			printf("29");
		}
		else
		{
			printf("28");
		}
	}
	return 0;
}
