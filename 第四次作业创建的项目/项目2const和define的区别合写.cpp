#include<iostream>
using namespace std;
int main()
{
	int x = 5;
#define T1 x+x
#define T2 T1-T1


	const int F1 = x + x;
	const int F2 = F1 - F1;
	cout << "使用define定义的T1输出为：" << T1 << "T2为：" << T2 << endl;
	cout << "使用const定义的F1输出为：" << F1 << "F2为：" << F2 << endl;
	system("pause");
	return 0;

}