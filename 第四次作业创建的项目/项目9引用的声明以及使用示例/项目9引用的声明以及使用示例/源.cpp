#include <iostream>
using namespace std;
int x = 5, y = 10;
int &r = x;//����һ������r��Ϊx�ı���
void print()//�ú���ר���������
{
	cout << "x=" << x << "y=" << y <<"r="<<r<< endl;
	cout << "Address of x" << &x << endl;
	cout << "Address of y" << &y << endl;
	cout << "Address of r" << &r << endl;

}
int main()
{
	print();
	r = y;//�൱��x=y����y��ֵ����x
	y = 100;//�ı�y��ֵ�����ı�x��ֵ
	print();
	x = 200;//�ı�x��ֵ����y�޹�
	print();
	system("pause");
	return 0;
}