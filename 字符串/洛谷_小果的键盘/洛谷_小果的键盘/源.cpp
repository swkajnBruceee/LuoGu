#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,count=0;
	char s[101];
	scanf("%d", &n);
	scanf("%s", s);
	for (i = 0;i < n;i++)
	{
		if (s[i] == 'V' && s[i + 1] == 'K')
		{
			s[i] = 'X';
			s[i + 1] = 'X';
			count++;
		}
	}
	for (i = 0;i < n;i++)
	{
		if (s[i] != 'X' && s[i] == s[i + 1])
		{
			count++;
			break;
		}
	}
	printf("%d", count);
	return 0;
}
