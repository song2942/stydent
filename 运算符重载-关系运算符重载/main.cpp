#include <iostream>
#include <string>
using namespace std;

//��ϵ�����������

class Person
{
public:

	Person(string name,int age) : m_Name(name) , m_Age(age)
	{
	}

	//��ϵ�����==������ ��Ա����
	bool operator==(Person& p) {
		if (p.m_Name == this->m_Name && p.m_Age == this->m_Age)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	//��ϵ�����!=������ ��Ա����
	bool operator!=(Person& p) {
		return !operator==(p);
	}


	string m_Name;
	int m_Age;
};

////��ϵ����������� ȫ��
//bool operator==(Person&p1, Person&p2) {
//	if (p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}

void test01() {
	Person p1("song",18), p2("song", 18);

	if (p1 == p2) {
		cout << "p1����p2" << endl;
	}
	else {
		cout << "p1������p2" << endl;
	}

	if (p1 != p2) {
		cout << "p1��p2�����" << endl;
	}
	else {
		cout << "p1��p2���" << endl;
	}
}


int main() {
	test01();

	system("pause");
	return 0;
}