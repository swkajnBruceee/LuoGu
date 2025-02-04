#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j;
	double Fn;
	double x = 0.0;
	double y = 0.0;
	scanf("%d", &n);
	x = pow((1 + sqrt(5)) / 2.0, n);
	y = pow((1 - sqrt(5)) / 2.0, n);
	Fn = (double)(x - y) / sqrt(5);
	printf("%.2lf", Fn);
	return 0;
}