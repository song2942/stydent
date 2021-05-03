#include <iostream>
#include <string>
using namespace std;
//类做友元

class Building;
class GoodGay {
public :
	GoodGay();
	void visit(); //参观
	Building* building;
};
class Building {
	//GoodGay是本类的好朋友 可以访问私有属性
	friend class GoodGay;
public:
	Building();

public:
	string m_SittingRoom;
private:
	string m_BedRoom;

};

//在类外写成员函数

Building::Building() {
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

GoodGay::GoodGay() {
	//创建建筑物的对象
	building = new Building;
}

void GoodGay::visit() {
	cout << "正在访问:  " << building->m_SittingRoom << endl;
	cout << "正在访问:  " << building->m_BedRoom << endl;

}

void test01() {
	GoodGay goodGay;
	goodGay.visit();
}

int main() {
	test01();


	system("pause");
	return 0;
}