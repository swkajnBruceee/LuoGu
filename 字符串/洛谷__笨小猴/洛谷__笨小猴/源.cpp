#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//判断一个数是否为质数
int isPrime(int n)
{
	if (n<=1)
	{
		return 0;    //1.小于等于1的数不是质数
	}
	if (n <= 3)
	{
		return 1;   //2.2和3是质数
	}
	if (n % 2 == 0 || n % 3 == 0)
	{
		return 0;    //3.能被2和3整除的不是质数
	}
	int i = 5;
	while (i * i <= n)
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			return 0;    //4.能被5及之后的数整除的数不是质数
		}
		i += 6;
	}
	return 1;    //5.经过上述判断都不符合的就是质数
}



//检查单词是否是LuckyWord
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


