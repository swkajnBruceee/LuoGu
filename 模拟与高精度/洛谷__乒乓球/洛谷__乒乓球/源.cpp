#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cmath>
using namespace std;
char str[100010];
int cnt = 0;

void show(int n)
{
	int a = 0;
	int b = 0;
	for (int i = 0;i < cnt; i++)
	{
		if (str[i] == 'W')a++;
		if (str[i] == 'L')b++;
		if ((a >= n || b >= n) && abs(a - b) >= 2)
		{
			cout << a << ":" << b << endl;
			a = b = 0;
		}

	}
	cout << a << ":" << b << endl;
}





int main()
{
	char ch;
	while (cin >> ch && ch != 'E')
	{
		if (ch == 'W' || ch == 'L')
		{
			str[cnt] = ch;
			cnt++;
		}
	}
	show(11);
	cout << endl;
	show(21);

	return 0;
}