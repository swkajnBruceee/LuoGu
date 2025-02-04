#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	int arr[3] = { 0 };
	char s[256];
	scanf("%s", s);
	int len = strlen(s);
	for (i = 0;i < len;i++)
	{
		if (s[i] == '=')
		{
			if (s[i + 1] >= '0' && s[i + 1] <= '9')
			{
				arr[s[i - 2] - 97] = s[i + 1] - '0';
			}
			else
			{
				arr[s[i - 2] - 97] = arr[s[i + 1] - 97];
			}
		}
		
	}
	for (i = 0;i < 3;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}