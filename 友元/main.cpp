#include <iostream>
#include <string>
using namespace std;

//全局函数作  友元


class Building {

	//声明此方法是Building的友元
	friend void goodGay(Building* buliding);  

public:
	Building() {
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}


public:
	string m_SittingRoom; //客厅
private:
	string m_BedRoom;  //卧室
};


void goodGay(Building* buliding) {
	cout << "访问:  " << buliding->m_SittingRoom << endl;
	cout << "访问:  " << buliding->m_BedRoom << endl;
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