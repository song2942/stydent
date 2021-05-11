#include <iostream>
#include <string>
using namespace std;

//赋值运算符的重载

//在c++中 编译器会给一个类添加4个函数
//默认构造,无参 函数体为空
//析构函数,无参 函数体为空
//拷贝函数 对函数值进行拷贝
//赋值运算符 operator=  对属性值进行拷贝

class Person
{
public:
	//在堆区创建年龄的内存
	Person(int age) {
		m_Age = new int(age);
	}



	//释放创建的年龄,如果它存在的话
	~Person(){
		if (NULL != m_Age) {
			delete m_Age;
			m_Age = NULL;
		}
	}

	//修改赋值运算符
	//修改的原因与浅拷贝类似,赋值运算一样会直接将地址值拷贝而非重新创建一块内存,所有一样需要重新定义
	Person& operator=(Person& p) {
		//注此处无法调用析构函数
		//析构函数是在该对象被释放时自动调用的
		if (NULL != m_Age) {
			delete m_Age;
			m_Age = NULL;
		}

		  this->m_Age = new int(*p.m_Age);
		  return *this;
	}

//private:
	int* m_Age;
};

void test01() {
	Person p1(18),p2(20),p3(30);
	p2 = p1 = p3;
	 
	cout << "p1的年龄是: " << *p1.m_Age << " 地址是: " << p1.m_Age<< endl;
	cout << "p2的年龄是: " << *p2.m_Age << " 地址是: " << p2.m_Age << endl;
	cout << "p3的年龄是: " << *p3.m_Age << " 地址是: " << p3.m_Age << endl;

}


int main()
{
	test01();


	system("pause");
	return 0;
}