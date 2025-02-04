#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main()
{
	int n, k,c,j,cc,jj;
	cin >> n;
	int arr[40][40] = {0};
	arr[0][n/2] = 1;
	c = 0, j = n / 2;
	for (k = 2;k <= n*n;k++)
	{
		if (c == 0 && j != n - 1)
		{
			arr[n - 1][j + 1] = k;
			c = n - 1;
			j++;
		}
		else if (c != 0 && j == n - 1)
		{
			arr[c - 1][0] = k;
			c--;
			j = 0;
		}
		else if (c == 0 && j == n - 1)
		{
			arr[c + 1][j] = k;
			c++;

		}
		else if (c != 0 && j != n - 1 )
		{
			if (arr[c - 1][j + 1] == 0  )
			{
				arr[c - 1][j + 1] = k;
				c--;
				j++;
			}
			else
			{
				arr[c + 1][j] = k;
				c++;
			}
		}
		
		
	}
	for (c = 0;c < n;c++)
	{
		for (j = 0;j< n;j++)
		{
			cout << arr[c][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
	