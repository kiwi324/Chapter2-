#include<iostream>
#include<iomanip>
using namespace std;
int sum = 5000;//ȫ�ֱ���sum
int main()
{
	int arr[3] = { 10,20,30 };
	{
		int i, sum = 0;//�ֲ�����sum
		for (i = 0;i < 3;i++)
			sum += arr[i];
		cout << "sum=" << sum << endl;
		::sum += sum;
		cout << "ȫ��sum=" << ::sum << endl;//::���ڷ���ȫ�ֱ���sum
	}
	sum *= 2;
	cout << "sum=" << sum << endl;
	::sum += sum;
	cout << "ȫ��sum=" << ::sum << endl;
	system("pause");
	return 0;
}