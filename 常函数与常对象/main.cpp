#include <iostream>
#include <string>
using namespace std;

//������
//��Ա�������һ�� const��,�˺�������Ϊ������
//�������ڲ������޸ĳ�Ա����
//��Ա��������������ӹؼ���mutable��,�ڳ���������Ȼ�����޸�

//������
//����ǰ��const�ƶ���Ϊ������
//������ֻ�ܵ��ó�����

//�˴�ʹ����class��ṹ��struct Ч������һ��
typedef class Person {

public:
	//������
	void p_f1() const  //�ڴ˴����const ���ɽ���Ա��������Ϊ������  �������ڲ��ɱ����Ա����
	{ 
		//m_A = 10;
		m_B = 10;
		cout << "������" << endl;
		
	}
	//��Ա����
	void p_f2()  //�ڴ˴����const ���ɽ���Ա��������Ϊ������  �������ڲ��ɱ����Ա����
	{
		m_A = 10;
		m_B = 10;
		cout << "��Ա����" << endl;

	}
//private:
	int m_A;
	mutable int m_B;//��ʹ�ڳ�����/��������,��ֵ��Ȼ���Ա��޸�  
}Per;


void f1() {
	Per p;//��ͨ����
	p.p_f1();
	p.p_f2();

	const Per p2;//������  ������ֻ�ܵ��ó����� �����޸ı�mutable�ؼ��ֵĳ�Ա����
	p2.m_B = 100;
	p2.p_f1();
	//p2.p_f2();
}

int main() {


	system("pause");
	return 0;
}