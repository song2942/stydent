#include <iostream>
#include <string>
using namespace std;

//���������-�Ӻ����������
//��Ա�������ؼӺ�
//ȫ�ֺ������ؼӺ�

//ע������
//1.���õ��������ͱ��ʽ��������ǲ��ܸı��
//2.�����������������,�������ؼӺ������,�����صķ�����ȴ����������Ĳ���


class Person {

public :

	////��Ա�������ؼӺ������
	//Person operator+(Person &p) {
	//	Person tmp;
	//	tmp.m_A = this->m_A + p.m_A;
	//	tmp.m_B = this->m_B + p.m_B;
	//	return tmp;
	//}

	int m_A;
	int m_B;
};


//ȫ�ֺ������ؼӺ������
Person operator+(Person& p1, Person& p2) {
	Person tmp;
	tmp.m_A = p1.m_A + p2.m_A;
	tmp.m_B = p1.m_B + p2.m_B;
	return tmp;
}

//ȫ�ֺ������ؼӺ�������� ����
Person operator+(Person& p1, int num) {
	Person tmp;
	tmp.m_A = p1.m_A + num;
	tmp.m_B = p1.m_B + num;
	return tmp;
}

void test01(){
	Person p1, p2 , p3;
	p1.m_A = 10;
	p1.m_B = 10;

	p2.m_A = 10;
	p2.m_B = 10;

	
	//��Ա�����ĵ��õı�����
	//p3 = p1.operator+(p2);
	//ȫ�ֺ����ĵ��õı�����
	//p3 = operator+(p1, p2);
	//��д��
	//p3 = p1 + p2;
	p3 = p1 + 20;

	//���������Ҳ�����ٴν��к�������


	cout << "p3.m_A��ֵ " << p3.m_A << endl;
	cout << "p3.m_B��ֵ " << p3.m_B << endl;

}
int main() {
	test01();

	system("pause");
	return 0;
}