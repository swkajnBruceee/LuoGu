#define _CRT_SECURE_NO_WARNINGS 1
#include<cstdio>
#include<iostream>
using namespace std;
string name[1005];
int cg[1005], mg[1005], eg[1005];
int main()
{
    int n, max = -999999, t;//tΪ��������ѧ����ţ�maxû�д�����ֻ��һ��������
    scanf("%d", &n);
    for (int a = 0;a < n;a++)cin >> name[a] >> cg[a] >> mg[a] >> eg[a];//����ѧ������
    for (int b = 0;b < n;b++)
    {
        if (cg[b] + mg[b] + eg[b] > max)
        {
            max = cg[b] + mg[b] + eg[b];//��������������߷�
            t = b;//���±���Ա����
        }
    }

    cout << name[t] << " " << cg[t] << " " << mg[t] << " " << eg[t];
    return 0;
}