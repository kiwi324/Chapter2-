#include <iostream>
using namespace std;
int x = 5, y = 10;
int &r = x;//定义一个引用r作为x的别名
void print()//该函数专门用于输出
{
	cout << "x=" << x << "y=" << y <<"r="<<r<< endl;
	cout << "Address of x" << &x << endl;
	cout << "Address of y" << &y << endl;
	cout << "Address of r" << &r << endl;

}
int main()
{
	print();
	r = y;//相当于x=y，将y的值赋给x
	y = 100;//改变y的值并不改变x的值
	print();
	x = 200;//改变x的值，与y无关
	print();
	system("pause");
	return 0;
}