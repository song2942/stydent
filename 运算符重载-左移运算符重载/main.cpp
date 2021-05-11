#include <iostream>
#include <string>
using namespace std;
//左移运算符的重载
//成员方法重载与全局方法重载   一般不使用  原因是 调用的写法为p.operator<<(cout) ,简化后 p << cout;,无法实现在左侧, 与常用的 cout << p 不太一样,

class Person {

	friend ostream& operator<< (ostream& cout, Person& p);

private:

	//void operator<<(Person &p) {
	//
	//}

	int m_A = 10;
	int m_B = 15;
};

//ostream 标准输出流 
//第一个参数为cout 效果是, 调用写法为 operator<<(cout,p); 简化后就是 cout << p;  注:参数名称可以自定义,类型不行
//返回值类型为  ostream& 效果为返回一个cout 对象以实现链式编程
ostream & operator<< (ostream &cout, Person &p) {
	 cout << "p.m_A=" << p.m_A << " p.m_B=" << p.m_B ;
	 return cout;
}

void test01() {
	Person p1;

	cout << p1 << endl;
}

int main() {
	test01();
	system("pause");

	return 0;
}