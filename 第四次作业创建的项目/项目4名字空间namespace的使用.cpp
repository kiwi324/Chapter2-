#include<iostream>
using namespace std;//using�����ṩһ�����������ֿռ�std��C++���ṩ������
                    //�ռ�std���������б�׼C++�Ķ��������
namespace one      //������һ�����ֿռ�one��������һ������M��һ������inf������û�зֺ�
{
	const int M = 200;
	int inf = 10;
}
namespace two//����ĵڶ������ֿռ䣬������һ������xһ������inf
{
	int x;
	int inf = -100;
}
using namespace one;//����һ��using��������ʹ��һ�����������ֿռ�one
int main()
{
	using two::x;//��������using����ֻʹ�����ֿռ�two�е�����x
	x = -100;//ֱ�ӷ����൱��two::x=-100;
	cout << inf << endl;//using����ʹ���������ֿռ�one�ˣ�����ֱ�ӷ���
	cout << M << endl;
	two::inf *= 2;//��������ʹ�� ���ֿռ��������ֲ������� ������δʹ��using�����е�����
	cout << two::inf << endl;
	cout << x << endl;
	system("pause");
	return 0;
}