#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char s[10];
	scanf("%s", &s);
	int ans = 0;
	int n = strlen(s);
	for (int i = 0;i < n;i++)
	{
		if (s[i] != ' ' && s[i] != '\n')
		{
			ans++;
		}
		
		/*if (s[i] >= 'A' && s[i] <= 'Z')ans++;
		if (s[i] >= 'a' && s[i] <= 'z')ans++;
		if (s[i] >= '0' && s[i] <= '9')ans++;*/
	}
	printf("%d", ans);
	return 0;
}