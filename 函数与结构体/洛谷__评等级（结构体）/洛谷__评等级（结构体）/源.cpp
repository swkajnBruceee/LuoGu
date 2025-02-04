#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

struct student
{
	int id;
	double s1, s2;
	double score;
	double final_score;
}

arr[1000];
int main()
{
    
	int n;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> arr[i].id >> arr[i].s1 >> arr[i].s2;
		arr[i].score = arr[i].s1 + arr[i].s2;
		arr[i].final_score = arr[i].s1 * 0.7 + arr[i].s2 * 0.3;
	}
	for (int i = 0;i < n;i++)
	{
		if (arr[i].score > 140 && arr[i].final_score >= 80)
		{
			cout << "Excellent" << endl;
		}
		else
		{
			cout << "Not excellent" << endl;
		}
	}
	return 0;
}
