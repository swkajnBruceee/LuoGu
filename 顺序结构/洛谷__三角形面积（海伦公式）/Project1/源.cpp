#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	double a, b, c, p, s;
	cin >> a >> b >> c;
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("%.1f", s);
	return 0;
}