#include <iostream>
#include <string>
using namespace std;

//继承的基本语法
//语法: class 子类 : 继承方法 父类 
//继承方式有: 
// 公共继承: 
//	父类中的公共类在子类中为 公共类
//	父类中的保护类在子类中为 保护类
//	父类中的私有类在子类中 不可访问
// 保护继承
//	父类中的公共类在子类中为 保护类
//	父类中的保护类在子类中为 保护类
//	父类中的私有类在子类中 不可访问
// 私有继承
//	父类中的公共类在子类中为 私有类
//	父类中的保护类在子类中为 私有类
//	父类中的私有类在子类中 不可访问
//子类也被称为 派生类  父类也被称为基类

//继承的优点,可以减少重复的代码

//公共类
class base {

public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

//子类 公共继承父类
class son : public base
{
public:
	void content() {
		

		cout << "子类特有方法" << endl;
	}

};
//子类 保护继承父类
class son_2 : protected base
{
public:
	void content() {
		cout << "子类特有方法" << endl;
	}

};

//子孙类  公共继承保护继承的子类
class son_2_1 : public son_2
{
public:

	

	void content() {
		cout  << "子孙类特有方法" << endl;
	}

};

//子类 私有继承父类
class son_3 : private base
{
public:
	void content() {
		cout << "子类特有方法" << endl;
	}

};
//子孙类  公共继承私有继承的子类
class son_2_2 : public son_3
{
public:
	void content() {
		cout  << "子孙类特有方法" << endl;
	}

};

void test01() {
	//son s;
	//s.head_public();
	//s.content();
	////s.head_protected()

	son_2_1 s1;
	s1.content();
	

	son_2_2 s2;
	s2.content();

}

int main()
{
	test01();


	system("pause");
	return 0;
}