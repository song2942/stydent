#include "House.h"

//无参构造
House::House() : m_size(0), m_money(NULL)
{
	cout << "House --  无参构造" << endl;
};
//有参构造
House::House(double size, double* money) : m_money(money),m_size(size)
{
	cout << "House --  有参构造" << endl;
};
// 拷贝构造
House::House(const House& h) : m_size(h.m_size), m_money(NULL != h.m_money ? new double(*h.m_money) : NULL)
{
	cout << "House --  拷贝构造" << endl;
	//深拷贝  用于解决浅拷贝带来的问题
	//在复制堆区数据时,不复制源数据中的地址
	//通过创建一个新的堆区空间,然后赋值为源地址的解引用
	//然后获取该堆区的地址值
	//重新创建一块堆区的内存 内存区的大小于源文件相同
	
};
House::~House() {
	if (NULL != House::m_money) {
		delete House::m_money;
		House::m_money = NULL;
	}
	cout << "House --  析构函数" << endl;
};