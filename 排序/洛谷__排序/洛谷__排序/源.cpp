#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,i;
	int arr[100001];
	scanf("%d", &n);
	for (i = 0;i < n;i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);
	for (i = 0;i < n;i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
