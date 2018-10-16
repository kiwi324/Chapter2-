#include<iostream>
using namespace std;
int main()
{
	bool f = 1 < 2;
	cout << f << " " << boolalpha << f << " " << noboolalpha << f << endl;//boolalpha控制输出true/false，noboolalpha控制输出1/0
	system("pause");
	return 0;
}