#include <iostream>
#include <string>
using namespace std;

//���μ̳�
//һ������������������,,����һ����̳�������������,�ⱻ��Ϊ���μ̳�/��ʯ�̳�
//ͨ����������Ի�ȡ��ͬ������,�����ֻҪ��һ�ݾ͹���,��������Դ�˷�
//������̳п��Խ�����μ̳�������������
//��̳� ʹ�ùؼ���virtual ����ڼ̳з�ʽ֮ǰ
//����̳м̳еĻ��౻��Ϊ�����

//����
class Animal
{
public:
	int m_Age;
};
//��
class Horse:virtual public Animal
{

};
//¿
class Donkey :virtual public Animal
{

};
//����
class Mule : public Horse,public Donkey
{

};

void test01() {
	Mule m;
	m.Horse::m_Age = 28;
	m.Donkey::m_Age = 18;

	cout << "���ӵ�����--�̳�����: " << m.Horse::m_Age << endl;
	cout << "���ӵ�����--�̳���¿: " << m.Donkey::m_Age << endl;
	cout << "���ӵ�����: " << m.m_Age << endl;

}


int main() {
	test01();

	system("pause");
	return 0;
}