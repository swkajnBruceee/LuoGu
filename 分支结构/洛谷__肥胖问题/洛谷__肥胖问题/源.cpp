//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	double m, h,BMI;
//	scanf("%lf%lf", &m, &h);
//	BMI = m / (h * h);
//	if (BMI < 18.5)
//	{
//		printf("Underweight");
//
//	}
//	if (BMI >= 18.5 && BMI < 24)
//	{
//		printf("Normal");
//	}
//	if (BMI >= 24)
//	{
//		printf("%.6g/nOverweight", BMI);
//	}
//	return 0;
//}

# include <iostream>
# include <stdio.h>

using namespace std;
double m, h, bmi;

int main() {
	cin >> m >> h;
	bmi = m / (h * h); // 根据题意计算
	// 开始比大小
	if (bmi < 18.5) cout << "Underweight" << endl;
	if (bmi >= 18.5 && bmi < 24)
		cout << "Normal";
	if (bmi >= 24)
		cout << bmi << endl << "Overweight" << endl;
	return 0;
}