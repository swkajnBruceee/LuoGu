#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,m,s;
	cin >> n >> m;
	int arr[2000001];
	for (int i = 0;i < m;i++)
	{
		cin >> s;
		arr[i] = s;
	}
	sort(arr,arr+m);
	for (int i = 0;i < m;i++)
	{
		cout << arr[i]<<" ";
	}

	return 0;
}