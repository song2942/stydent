#include "House.h"

typedef class Father {
public:
	//无参构造
	Father();
	//有参构造
	Father(string name, House house);
	//拷贝构造
	Father(const Father& f);
	//析构
	~Father();
private:
	string m_name;//姓名
	House m_house;//房子
}father;