#include <iostream>
#include <string>
using namespace std;
//���������������
//��Ա����������ȫ�ַ�������   һ�㲻ʹ��  ԭ���� ���õ�д��Ϊp.operator<<(cout) ,�򻯺� p << cout;,�޷�ʵ�������, �볣�õ� cout << p ��̫һ��,

class Person {

	friend ostream& operator<< (ostream& cout, Person& p);

private:

	//void operator<<(Person &p) {
	//
	//}

	int m_A = 10;
	int m_B = 15;
};

//ostream ��׼����� 
//��һ������Ϊcout Ч����, ����д��Ϊ operator<<(cout,p); �򻯺���� cout << p;  ע:�������ƿ����Զ���,���Ͳ���
//����ֵ����Ϊ  ostream& Ч��Ϊ����һ��cout ������ʵ����ʽ���
ostream & operator<< (ostream &cout, Person &p) {
	 cout << "p.m_A=" << p.m_A << " p.m_B=" << p.m_B ;
	 return cout;
}

void test01() {
	Person p1;

	cout << p1 << endl;
}

int main() {
	test01();
	system("pause");

	return 0;
}