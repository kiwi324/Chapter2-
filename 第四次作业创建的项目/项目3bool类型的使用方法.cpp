#include<iostream>
using namespace std;
int main()
{
	bool f = 1 < 2;
	cout << f << " " << boolalpha << f << " " << noboolalpha << f << endl;//boolalpha�������true/false��noboolalpha�������1/0
	system("pause");
	return 0;
}