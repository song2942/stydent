#include <iostream>
#include <string>
using namespace std;

//ȫ�ֺ�����  ��Ԫ


class Building {

	//�����˷�����Building����Ԫ
	friend void goodGay(Building* buliding);  

public:
	Building() {
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}


public:
	string m_SittingRoom; //����
private:
	string m_BedRoom;  //����
};


void goodGay(Building* buliding) {
	cout << "����:  " << buliding->m_SittingRoom << endl;
	cout << "����:  " << buliding->m_BedRoom << endl;
}

void test01() {
	Building buliding;
	goodGay(&buliding);
}

int  main() {
	test01();


	system("pause");
	return 0;
}