#include <iostream>
#include <string>
using namespace std;
//������Ԫ

class Building;
class GoodGay {
public :
	GoodGay();
	void visit(); //�ι�
	Building* building;
};
class Building {
	//GoodGay�Ǳ���ĺ����� ���Է���˽������
	friend class GoodGay;
public:
	Building();

public:
	string m_SittingRoom;
private:
	string m_BedRoom;

};

//������д��Ա����

Building::Building() {
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

GoodGay::GoodGay() {
	//����������Ķ���
	building = new Building;
}

void GoodGay::visit() {
	cout << "���ڷ���:  " << building->m_SittingRoom << endl;
	cout << "���ڷ���:  " << building->m_BedRoom << endl;

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