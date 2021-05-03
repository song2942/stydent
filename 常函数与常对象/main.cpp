#include <iostream>
#include <string>
using namespace std;

//常函数
//成员函数后加一个 const后,此函数被称为常函数
//常函数内不可以修改成员属性
//成员属性在声明是添加关键字mutable后,在常函数中依然可以修改

//常对象
//声明前加const称对象为常对象
//常对象只能调用常函数

//此处使用类class或结构体struct 效果基本一致
typedef class Person {

public:
	//常函数
	void p_f1() const  //在此处添加const 即可将成员函数修饰为常函数  常函数内不可变更成员属性
	{ 
		//m_A = 10;
		m_B = 10;
		cout << "常函数" << endl;
		
	}
	//成员函数
	void p_f2()  //在此处添加const 即可将成员函数修饰为常函数  常函数内不可变更成员属性
	{
		m_A = 10;
		m_B = 10;
		cout << "成员函数" << endl;

	}
//private:
	int m_A;
	mutable int m_B;//即使在常函数/常对象中,此值依然可以被修改  
}Per;


void f1() {
	Per p;//普通对象
	p.p_f1();
	p.p_f2();

	const Per p2;//常对象  常对象只能调用常函数 可以修改被mutable关键字的成员变量
	p2.m_B = 100;
	p2.p_f1();
	//p2.p_f2();
}

int main() {


	system("pause");
	return 0;
}