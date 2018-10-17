#include<iostream>
using namespace std;
void Fun(int i, int j = 5, int k = 10);
int main()
{
	Fun(20);
	Fun(20, 30);
	Fun(20, 30, 40);
	system("pause");
	return 0;
}
void Fun(int i, int j, int k)//原型中已经指定了默认参数值，在定义的首部不能再次指定
{
	cout << i << " " << j << " " << k << endl;
}