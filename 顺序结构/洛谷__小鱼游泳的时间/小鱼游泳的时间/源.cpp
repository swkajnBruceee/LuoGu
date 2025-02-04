#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d,f,g;
	cin >> a >> b >> c >> d;
	if (d < b)
	{
		cout << c - a - 1 <<" "<<60 + d - b << endl;
	}
	else
	{
		cout << c - a <<" " << d - b << endl;
	}
	return 0;
}