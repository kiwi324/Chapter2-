#include<iostream>
using namespace std;//using声明提供一个完整的名字空间std，C++中提供的名字
                    //空间std涵盖了所有标准C++的定义和声明
namespace one      //定义了一个名字空间one，里面有一个常量M，一个变量inf，后面没有分号
{
	const int M = 200;
	int inf = 10;
}
namespace two//定义的第二个名字空间，其中有一个变量x一个变量inf
{
	int x;
	int inf = -100;
}
using namespace one;//方法一：using声明——使用一个完整的名字空间one
int main()
{
	using two::x;//方法二：using声明只使用名字空间two中的内容x
	x = -100;//直接访问相当于two::x=-100;
	cout << inf << endl;//using声明使用整个名字空间one了，可以直接访问
	cout << M << endl;
	two::inf *= 2;//方法三：使用 名字空间名：：局部内容名 操作，未使用using声明中的内容
	cout << two::inf << endl;
	cout << x << endl;
	system("pause");
	return 0;
}