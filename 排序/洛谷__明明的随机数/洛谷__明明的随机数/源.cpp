#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<algorithm>

using namespace std;
int n[105], g, tmp, gg;//����Ҫ������һ������������Ϊ���˹������֣�����ʵ�ʴ洢�����ݸ����ǲ�������������ݸ����ġ�
bool pn[1005];//bool�����ж�
int main()
{
    cin >> g;
    for (int i = 0;i < g;i++)
    {
        cin >> tmp;
        if (pn[tmp] == 1)continue;
        pn[tmp] = 1;
        n[gg++] = tmp;
    }
    sort(n, n + gg);
    cout << gg << endl;
    for (int i = 0;i < gg;i++)cout << n[i] << " ";
    return 0;
}