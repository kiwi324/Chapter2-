#include<iostream>
using namespace std;
int main()
{
	int x = 5;
#define T1 x+x
#define T2 T1-T1


	const int F1 = x + x;
	const int F2 = F1 - F1;
	cout << "ʹ��define�����T1���Ϊ��" << T1 << "T2Ϊ��" << T2 << endl;
	cout << "ʹ��const�����F1���Ϊ��" << F1 << "F2Ϊ��" << F2 << endl;
	system("pause");
	return 0;

}