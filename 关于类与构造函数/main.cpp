#include "Father.h"


void f1() {
	house h1(1, new double(10000.0));
	
	house h2(h1);
	
}


class test {
public :
	static void t1() {};

};


int main() {
	test * pt = NULL;  //注意 空指针是可以访问成员函数的,但如果调用的函数中获取的值,会导致程序崩溃,所以需要预防此种情况发生
	cout << pt->t1 << endl;


	//f1();
	system("pause");
	return 0;
}