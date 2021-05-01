#include "Father.h"

//无参构造
Father::Father() {
	cout << "Father --  无参构造" << endl;
};
//有参构造
Father::Father(string name, House house) {
	cout << "Father --  有参构造" << endl;
};
// 拷贝构造
Father::Father(const Father* f) {
	cout << "Father --  拷贝构造" << endl;
	//浅拷贝与深拷贝  默认为浅拷贝  即直接通过等号赋值
	
	Father::m_house = f->m_house;
	Father::m_name = f->m_name;

	//浅拷贝的隐患  当浅拷贝的内容中出现堆区中的数据时
	//浅拷贝不会创建一个新的对象,而是直接连接已有的堆区数据
	//即原数据与拷贝后的数据连接同一个堆区中的数据
	//这会导致当析构函数释放堆区中的内存时 重复释放
	//解决方案在  House类中

};
Father::~Father() {
	cout << "Father --  析构函数" << endl;
};