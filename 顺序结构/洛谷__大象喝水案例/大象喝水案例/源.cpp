#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int h, r,n;
	
	cin >> h >> r;
	n = 20000 / (3.14 * r * r * h) + 1;
	 
	 cout << n << endl;
	return 0;
}
