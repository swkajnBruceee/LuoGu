#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>
#include<algorithm>
int main()
{
	int n,i,sum=0;
	double score;
	cin >> n;
	int arr[10001];
	for (i = 1;i <= n;i++)
	{
		scanf("%d", &arr[i]);
	}
	sort(arr +1, arr + n +1);
	for (i = 2;i < n;i++)
	{
		sum += arr[i];
	}
	score = (double)sum / (n - 2);
	printf("%.2lf", score);
	return 0;
}