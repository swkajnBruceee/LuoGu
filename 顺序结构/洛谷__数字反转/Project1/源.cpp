#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
    int  a, b, c, d,e,f;
    
    float t,ans;
    scanf("%f",& t);
    a = t * 10;
    b = a % 10;//个位
    c = a/10%10;//十位
    d = a / 100 % 10;
    e = a / 1000 % 10;
    f = b * 1000 + c * 100 + d * 10 + e;
    ans = f / 1000.0;
    printf("%.3f", ans);
    return 0;
}