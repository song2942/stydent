#include <iostream>
#include <string>
using namespace std;

//运算符重载-加号运算符重载
//成员函数重载加号
//全局函数重载加号

//注意事项
//1.内置的数据类型表达式的运算符是不能改变的
//2.不能滥用运算符重载,例如重载加号运算符,但重载的方法中却进行了相减的操作


class Person {

public :

	////成员函数重载加号运算符
	//Person operator+(Person &p) {
	//	Person tmp;
	//	tmp.m_A = this->m_A + p.m_A;
	//	tmp.m_B = this->m_B + p.m_B;
	//	return tmp;
	//}

	int m_A;
	int m_B;
};


//全局函数重载加号运算符
Person operator+(Person& p1, Person& p2) {
	Person tmp;
	tmp.m_A = p1.m_A + p2.m_A;
	tmp.m_B = p1.m_B + p2.m_B;
	return tmp;
}

//全局函数重载加号运算符的 重载
Person operator+(Person& p1, int num) {
	Person tmp;
	tmp.m_A = p1.m_A + num;
	tmp.m_B = p1.m_B + num;
	return tmp;
}

void test01(){
	Person p1, p2 , p3;
	p1.m_A = 10;
	p1.m_B = 10;

	p2.m_A = 10;
	p2.m_B = 10;

	
	//成员函数的调用的本质是
	//p3 = p1.operator+(p2);
	//全局函数的调用的本质是
	//p3 = operator+(p1, p2);
	//简化写法
	//p3 = p1 + p2;
	p3 = p1 + 20;

	//运算符重载也可以再次进行函数重载


	cout << "p3.m_A的值 " << p3.m_A << endl;
	cout << "p3.m_B的值 " << p3.m_B << endl;

}
int main() {
	test01();

	system("pause");
	return 0;
}