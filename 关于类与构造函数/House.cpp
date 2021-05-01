#include "House.h"

//无参构造
House::House() {
	cout << "House --  无参构造" << endl;
};
//有参构造
House::House(double size, double* money) {
	cout << "House --  有参构造" << endl;
};
// 拷贝构造
House::House(const House* h) {
	cout << "House --  拷贝构造" << endl;
	//深拷贝  用于解决浅拷贝带来的问题
	//在复制堆区数据时,不复制源数据中的地址
	//通过创建一个新的堆区空间,然后赋值为源地址的解引用
	//然后获取该堆区的地址值

};
House::~House() {
	cout << "House --  析构函数" << endl;
};