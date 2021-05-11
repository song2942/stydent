#include <iostream>
#include <string>
using namespace std;

//重载递增运算符


//自定义整形变量
class MyInteger {

	friend ostream& operator<<(ostream& cout, const MyInteger& p);

public:
	MyInteger() {
		m_Num = 0;
	}

	//重载递增运算符  递增分为 前置递增与后置递增
	//前置递增   返回引用是为了对同一个数据进行递增
	//返回值是引用而不是值的原因,值会创建一个新的变量,导致多次相加时,递增的值不是添加在同一个变量上
	//而引用则不会,使用引用返回的一直是同一个值
	MyInteger& operator++()
	{
		//先进行递增运算
		 m_Num = m_Num + 1;
		 //然后返回自身
		 return *this;
	}
	//后置递增
	//int表示占位参数  可以用于区分前置递增与后置递增 注:只能写int
	//为什么此处的返回值类型为值而不是引用
	//由于返回的是一个局部变量,如果返回引用,在此方法执行完成后,局部变量被释放,之后再操作此值就是非法操作
	MyInteger operator++(int) 
	{
		//先记录自身的状态
		MyInteger tmp = *this;
		//然后进行递增的操作
		m_Num = m_Num + 1;
		//最后返回自身
		return tmp;	 
	}

private:
	int m_Num;
};



//左移运算符重载
//因为在cout << myint++的时候相当于调用“ostream & operator<<(ostream & cout, const MyIntger & myint)”函数，
//而myint++作为它第二个参数传入，myint++也相当于调用了“MyIntger operator++(int)”结果是一个值类型的返回，
//而这个值本身是只读的。所以在调用operator << 函数时，形参得加const

ostream& operator<<(ostream& cout, const  MyInteger& p) {
	cout << p.m_Num;
	return cout;
}


void test01() {
	MyInteger myInt;
	cout << ++myInt << endl;
	cout << myInt++ << endl;

	cout << myInt << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}