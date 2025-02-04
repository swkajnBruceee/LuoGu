#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	int arr1[3];
	int arr2[3];
	int arr3[3];
	
	for (t = 0;t < 2;t++)
	{
	   scanf("%lf", &arr1[t]);
	}
	for (t = 0;t < 2;t++)
	{
		scanf("%lf", &arr2[t]);
	}
	for (t = 0;t < 2;t++)
	{
		scanf("%lf", &arr3[t]);
	}
	double s1 = (double)sqrt((arr1[0] - arr2[0]) * (arr1[0] - arr2[0]) + (arr1[1] - arr2[1]) * (arr1[1] - arr2[1]));
	double s2 = (double)sqrt((arr1[0] - arr3[0]) * (arr1[0] - arr3[0]) + (arr1[1] - arr3[1]) * (arr1[1] - arr3[1]));
	double s3 = (double)sqrt((arr3[0] - arr2[0]) * (arr3[0] - arr2[0]) + (arr3[1] - arr2[1]) * (arr3[1] - arr2[1]));
	double sum = s1 + s2 + s3;
	printf("%.2lf", sum);
	return 0;
}

