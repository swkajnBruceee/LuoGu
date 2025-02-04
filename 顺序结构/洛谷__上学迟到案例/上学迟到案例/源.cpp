#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdio>
using namespace std;

#include<cmath>
int main()
{
	int s, v, h,H1,H2,M,m,shi;
	double time;
	cin >> s >> v;
	time = ceil((double)s / v) + 10;
	h = time / 60;
	m = ( int )time % 60;
	cout <<time <<endl<< m << endl;
	
	if (h <= 7 )
	{
		if (m > 0)
		{
			H1 = 0;
			H2 = 7 - h;
			M = 60 - m;
		}
		else
		{
		    H1 = 0;
			H2 = 8 - h;
			M = 0;
		}
		cout << H1 << H2 << ":" << M << M<<endl;
	
	}
	else
	{

		if (m > 0)
		{
			shi = 24 + 7 - h;
			M = 60 - m;
		}
		else
		{
			 shi = 24 + 8 - h;
			M = 0;
		}
		cout << shi << ":" << M <<M<< endl;
	}
	
	
	return 0;
}
