#include <iostream>
#include <string>
using namespace std;

//关系运算符的重载

class Person
{
public:

	Person(string name,int age) : m_Name(name) , m_Age(age)
	{
	}

	//关系运算符==的重载 成员函数
	bool operator==(Person& p) {
		if (p.m_Name == this->m_Name && p.m_Age == this->m_Age)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	//关系运算符!=的重载 成员函数
	bool operator!=(Person& p) {
		return !operator==(p);
	}


	string m_Name;
	int m_Age;
};

////关系运算符的重载 全局
//bool operator==(Person&p1, Person&p2) {
//	if (p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}

void test01() {
	Person p1("song",18), p2("song", 18);

	if (p1 == p2) {
		cout << "p1等于p2" << endl;
	}
	else {
		cout << "p1不等于p2" << endl;
	}

	if (p1 != p2) {
		cout << "p1与p2不相等" << endl;
	}
	else {
		cout << "p1与p2相等" << endl;
	}
}


int main() {
	test01();

	system("pause");
	return 0;
}