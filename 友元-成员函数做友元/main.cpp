#include <iostream>
#include <string>
using namespace std;

//��Ա��������Ԫ

class Building;
class GoodGay;


class GoodGay {
public:
	GoodGay();

	void visit1();//�ô˺������Է���Building ��˽�г�Ա
	void visit2();//�ô˺����޷�����Building ��˽�г�Ա


	Building* building;
};
class Building {
	
	friend void GoodGay::visit1();

public:
	Building();
public : 
	string m_SittingRoom; //����
private:
	string m_BedRoom; //����
};

GoodGay::GoodGay() {
	building = new Building;
}
Building::Building() {
	m_SittingRoom = "����";
	m_BedRoom = "����";
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