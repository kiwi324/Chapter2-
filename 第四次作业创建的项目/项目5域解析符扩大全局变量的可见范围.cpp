#include<iostream>
#include<iomanip>
using namespace std;
int sum = 5000;//全局变量sum
int main()
{
	int arr[3] = { 10,20,30 };
	{
		int i, sum = 0;//局部变量sum
		for (i = 0;i < 3;i++)
			sum += arr[i];
		cout << "sum=" << sum << endl;
		::sum += sum;
		cout << "全局sum=" << ::sum << endl;//::用于访问全局变量sum
	}
	sum *= 2;
	cout << "sum=" << sum << endl;
	::sum += sum;
	cout << "全局sum=" << ::sum << endl;
	system("pause");
	return 0;
}