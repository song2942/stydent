#include <iostream>
#include <string>
using namespace std;

//成员函数做友元

class Building;
class GoodGay;


class GoodGay {
public:
	GoodGay();

	void visit1();//让此函数可以访问Building 的私有成员
	void visit2();//让此函数无法访问Building 的私有成员


	Building* building;
};
class Building {
	
	friend void GoodGay::visit1();

public:
	Building();
public : 
	string m_SittingRoom; //客厅
private:
	string m_BedRoom; //卧室
};

GoodGay::GoodGay() {
	building = new Building;
}
Building::Building() {
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}
void GoodGay::visit1() {
	cout << "visit 1 >> " << building->m_SittingRoom << endl;
	cout << "visit 1 >> " << building->m_BedRoom << endl;
}
void GoodGay::visit2(){
	cout << "visit 2 >> " << building->m_SittingRoom << endl;
	//cout << "visit 1 >> " << building->m_BedRoom << endl;
}

void test01() {
	GoodGay goodGay;
	goodGay.visit1();
	goodGay.visit2();
}

int main() {
	test01();

	system("pause");
	return 0;
}