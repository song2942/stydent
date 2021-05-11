#include <iostream>
#include <string>
using namespace std;

//同名成员的处理方式
//当子类与父类中出现同名成员时,
//在子类中访问子类的成员直接使用名称即可
//访问父类的成员需要添加 作用域(类名::)
//同名成员函数的处理方式 与成员的处理方式相同
//子类会隐藏父类所有同名成员函数(包括父类重载的成员函数)


class Base {
public:
	Base() 
	{
		m_A = 10;
	}

	void func() {
		cout << "父类的成员函数" << endl;
	}

	void func(int a) {
		cout << "父类的成员函数 int a" << endl;
	}

	int m_A;
};

class Son : public Base
{
public:
	Son()
	{
		m_A = 20;
	}
	void func() {
		cout << "子类的成员函数" << endl;
	}

	int m_A;
};
	 
void test01() {
	Son s;
	cout << "s.m_A的值为: " << s.m_A << endl;
	cout << "s.Base::m_A的值为: " << s.Base::m_A << endl;
	s.Base::func();
}

int main() {
	test01();


	system("pause");
	return 0;
}