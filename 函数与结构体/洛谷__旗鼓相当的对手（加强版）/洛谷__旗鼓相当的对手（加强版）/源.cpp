#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<stdlib.h>
using namespace std;

struct student
{
	string name;
	int ch, math, eng,sum;
}
arr[1000];
int main()
{
	int n;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> arr[i].name >> arr[i].ch >> arr[i].math >> arr[i].eng;
		arr[i].sum = arr[i].ch + arr[i].math + arr[i].eng;
	}
	for (int i = 0;i < n;i++)
	{
		for (int j = i + 1;j < n;j++)
		{

			//abs为绝对值函数，引用的头文件为#include<stdlib.h>
			if (
				abs(arr[i].ch - arr[j].ch) <= 5
				&& abs(arr[i].math - arr[j].math) <= 5
				&& abs(arr[i].eng - arr[j].eng) <= 5
				&& abs(arr[i].sum - arr[j].sum) <= 10
				)
			{
				if (arr[i].name < arr[j].name)
				{
					cout << arr[i].name << " " << arr[j].name << endl;

				}
				else
				{
					cout << arr[j].name << " " << arr[i].name << endl;
				}
			}
		}

	}
	return 0;
}
