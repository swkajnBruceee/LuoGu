#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int a[100001];
int main()
{
	int n;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a , a + n );
	cout << a[n-1] - a[0];
	return 0;
}