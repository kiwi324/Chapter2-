#include<iostream>
using namespace std;
int main()
{
	char c;
	int a;
	float f;
	cin >> c >> a >> f;//����cinʵ�����룬>>���������ָʾ����
	a = a + c;
	f = f + 2 * a;
	cout << "c=" << "a=" << a << "f=" << f << endl;//����coutʵ�������""�ڲ�����ʾ���ϵ����ݣ�endl��������\n��ͬ������
	system("pause");
	return 0;
}