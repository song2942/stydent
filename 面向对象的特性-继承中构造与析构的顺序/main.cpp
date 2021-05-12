#include <iostream>
#include <string>
using namespace std;

//菱形继承
//一个基类有两个派生类,,又有一个类继承了两个派生类,这被称为菱形继承/钻石继承
//通过作用域可以获取不同的年龄,但这个只要有一份就够了,这会造成资源浪费
//利用虚继承可以解决菱形继承所带来的问题
//虚继承 使用关键字virtual 添加在继承方式之前
//被虚继承继承的基类被称为虚基类

//动物
class Animal
{
public:
	int m_Age;
};
//马
class Horse:virtual public Animal
{

};
//驴
class Donkey :virtual public Animal
{

};
//骡子
class Mule : public Horse,public Donkey
{

};

void test01() {
	Mule m;
	m.Horse::m_Age = 28;
	m.Donkey::m_Age = 18;

	cout << "骡子的年龄--继承自马: " << m.Horse::m_Age << endl;
	cout << "骡子的年龄--继承自驴: " << m.Donkey::m_Age << endl;
	cout << "骡子的年龄: " << m.m_Age << endl;

}


int main() {
	test01();

	system("pause");
	return 0;
}