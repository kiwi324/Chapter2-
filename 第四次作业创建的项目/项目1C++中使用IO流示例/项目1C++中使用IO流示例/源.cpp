#include<iostream>
using namespace std;
int main()
{
	char c;
	int a;
	float f;
	cin >> c >> a >> f;//利用cin实现输入，>>开口向左出指示输入
	a = a + c;
	f = f + 2 * a;
	cout << "c=" << "a=" << a << "f=" << f << endl;//利用cout实现输出，""内部是显示器上的内容，endl的作用与\n相同，换行
	system("pause");
	return 0;
}