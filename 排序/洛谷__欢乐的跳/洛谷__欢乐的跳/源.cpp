#include<cstdio>
#include<iostream>
#include<algorithm>//sort�ر�ͷ�ļ�
#include<cmath>
using namespace std;
int a[1005], c[1005];//����
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1;i <= n;i++) {
        scanf("%d", &a[i]);//����
    }
    for (int i = 1;i < n;i++) {
        c[i] = abs(a[i] - a[i + 1]);//�����
    }
    sort(c + 1, c + n);
    for (int i = 1;i < n;i++) {
        if (c[i] != i) { printf("Not jolly\n");return 0; }//�ж����
    }
    printf("Jolly\n");//���δ���������Ϊ��ȷ��
    return 0;//���̽���
}