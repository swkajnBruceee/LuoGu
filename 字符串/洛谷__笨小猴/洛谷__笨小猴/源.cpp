#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//�ж�һ�����Ƿ�Ϊ����
int isPrime(int n)
{
	if (n<=1)
	{
		return 0;    //1.С�ڵ���1������������
	}
	if (n <= 3)
	{
		return 1;   //2.2��3������
	}
	if (n % 2 == 0 || n % 3 == 0)
	{
		return 0;    //3.�ܱ�2��3�����Ĳ�������
	}
	int i = 5;
	while (i * i <= n)
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			return 0;    //4.�ܱ�5��֮���������������������
		}
		i += 6;
	}
	return 1;    //5.���������ж϶������ϵľ�������
}



//��鵥���Ƿ���LuckyWord
void CheckLuckyWord(char word[])
{
	int count[26] = { 0 };
	int len = strlen(word);
	for (int i = 0;i < len;i++)
	{
		count[word[i] - 'a']++;
	}
	int max = 0;
	int min = len;
	for (int i = 0;i < 26;i++)
	{
		if (count[i] > max)
		{
			max = count[i];
		}
		if (count[i] < min && count[i] != 0)
		{
			min = count[i];
		}
	}
	if (isPrime(max - min))
	{
		printf("Lucky Word\n");
		printf("%d\n", max - min);
	}
	else
	{
		printf("No Answer\n0");
	}
}

int main()
{
	char word[101];
	scanf("%s", &word);
	CheckLuckyWord(word);
	return 0;
}


