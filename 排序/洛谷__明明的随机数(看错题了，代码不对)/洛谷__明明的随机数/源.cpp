#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,count=0;
	int arr[101] = {0};
	scanf("%d", &n);
	
	int i,j,k,h,x = 0;
	for (i = 0;i < n;i++)
	{
		//设置随机数种子
		srand((unsigned int)time(NULL));
		//生成随机数
		int random_num = rand() % 1000 + 1;
		for (j = 0;j < n;j++)
		{
			if (arr[j] == random_num)
			{
				count++;
				break;
			}

		}
		if (count == 0)
		{
			arr[x] = random_num;
			x++;
		}
	}
	int len = 0;
	for (h = 0;h < 101;h++)
	{
		if (arr[h] != 0)
		{
			len++;
		}
	}
	sort(arr,arr+len);
	for (k = 0;k < len;k++)
	{
		cout << arr[k];
	}
	return 0;
}
