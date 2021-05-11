#include <iostream>
#include <string>
using namespace std;

//函数调用运算符重载
//仿函数非常灵活,没有固定的写法

class MyPoint
{
public:
	void operator()(string test) {
		cout << test << endl;
	}
};

void test01()
{
	MyPoint print;
	print("这是打印的内容");//由于使用时非常类似于函数调用 因此被称为仿函数
	//通过匿名对象调用仿函数    MyPoint()  匿名函数对象
	MyPoint()("通过匿名对象调用仿函数");
}


int main() {
	test01();

	system("pause");
	return 0;
}