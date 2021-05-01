#pragma once
#include <iostream>
#include <string>
using namespace std;

class House {
public:
	//无参构造
	House();
	//有参构造
	House(double size, double* money);
	// 拷贝构造
	House(const House * h);
	//析构函数
	~House();

private:
	double m_size;//大小
	double* m_money;//价格
};
