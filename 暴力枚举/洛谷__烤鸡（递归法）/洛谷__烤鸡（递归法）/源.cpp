#include<iostream>
using namespace std;
int n, kind = 0, m1[10000][10], m2[10];
void peiliao(int total, int a) {
    if (a == 10) {
        if (total == n) {
            for (int j = 0;j < 10;j++) m1[kind][j] = m2[j];//符合要求存起来
            kind++;
        }
    }
    else if (total >= n);//小小优化一下 
    else
        for (int i = 1;i <= 3;i++) {
            m2[a] = i;
            peiliao(total + i, a + 1);
        }
}
int main() {
    cin >> n;
    peiliao(0, 0);
    cout << kind << endl;
    for (int j = 0;j < kind;j++) {
        for (int i = 0;i < 10;i++) cout << m1[j][i] << " "; 
        cout << endl;
    }
    return 0;
}
/*
下面是代码的主要逻辑和一些解释：

1.n：用户输入的数字，表示要生成的数字组合的和。
2.kind：用来记录找到的符合条件的组合数量。
3.m1[10000][10]：一个二维数组，用来存储所有找到的组合。这里假设最多有10000种组合，每种组合最多由10个数字组成。
4.m2[10]：一个一维数组，用来临时存储当前正在生成的组合。
5.peiliao(int total, int a)：递归函数，用于生成数字组合。
      total：当前组合的和。
      a：当前组合中的数字索引。
6.if (a==10)：如果当前组合已经包含了10个数字，检查它们的和是否等于 n。如果是，则将这个组合存储到 m1 中，并增加 kind 的值。
7.else if (total>=n)：如果当前组合的和已经大于或等于 n，则停止递归。
8.for (int i=1;i<=3;i++)：对于1到3的每个数字，将其添加到当前组合中，并递归调用 peiliao 函数以生成下一个数字。
9.main 函数：程序的入口点。
    读取用户输入的 n。
    调用 peiliao(0,0) 开始生成组合。
    输出找到的组合数量 kind。
    遍历 m1 数组，输出所有找到的组合。
*/
