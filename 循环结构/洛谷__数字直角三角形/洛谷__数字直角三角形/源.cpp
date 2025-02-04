#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main()
{
	int a,sum;
	cin >> a;
	sum = a * (a + 1) / 2;
	int i = 1;
	int  j = 1;
	while (i <= sum)
	{
		
		
		if (i < 10)
		{
			cout << 0 << i;

		}
		else
		{
			cout << i;
		}
		i++;
		j++;
		if (j > a)
		{
			j = 1;
			a--;
			
			cout << endl;
		}

	}
		

	


	return 0;
}

