#include <iostream>
#include <string>
using namespace std;

//继承中的对象模型
//父类中所有非静态成员,子类中都会继承
//父类中的私有成员属性被编译器隐藏而导致访问不了,但依然被继承了 
//验证方法,通过Visual Studio的命令提示工具查看对象模型
//跳转到具体的路径下 使用 cd 具体路径 ,如果不在c盘,请跳转到具体的盘符  盘符:
//查看命名
//cl /d1 reportSingleClassLayout类名 文件名

class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son : public Base
{
public :
	int m_D;
};
	
class GrandSon : public Son
{
public :
	int m_E;
};

void test01()
{
	Son son;
	cout << "Son所占的内存空间为: " << sizeof(son) << endl;
	GrandSon grandSon;
	cout << "grandSon所占的内存空间为: " << sizeof(grandSon) << endl;
}



int main() {
	test01();
	system("pause");
	return 0;
}