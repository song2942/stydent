#include <iostream>
#include <string>
using namespace std;

//�̳еĻ����﷨
//�﷨: class ���� : �̳з��� ���� 
//�̳з�ʽ��: 
// �����̳�: 
//	�����еĹ�������������Ϊ ������
//	�����еı�������������Ϊ ������
//	�����е�˽������������ ���ɷ���
// �����̳�
//	�����еĹ�������������Ϊ ������
//	�����еı�������������Ϊ ������
//	�����е�˽������������ ���ɷ���
// ˽�м̳�
//	�����еĹ�������������Ϊ ˽����
//	�����еı�������������Ϊ ˽����
//	�����е�˽������������ ���ɷ���
//����Ҳ����Ϊ ������  ����Ҳ����Ϊ����

//�̳е��ŵ�,���Լ����ظ��Ĵ���

//������
class base {

public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

//���� �����̳и���
class son : public base
{
public:
	void content() {
		

		cout << "�������з���" << endl;
	}

};
//���� �����̳и���
class son_2 : protected base
{
public:
	void content() {
		cout << "�������з���" << endl;
	}

};

//������  �����̳б����̳е�����
class son_2_1 : public son_2
{
public:

	

	void content() {
		cout  << "���������з���" << endl;
	}

};

//���� ˽�м̳и���
class son_3 : private base
{
public:
	void content() {
		cout << "�������з���" << endl;
	}

};
//������  �����̳�˽�м̳е�����
class son_2_2 : public son_3
{
public:
	void content() {
		cout  << "���������з���" << endl;
	}

};

void test01() {
	//son s;
	//s.head_public();
	//s.content();
	////s.head_protected()

	son_2_1 s1;
	s1.content();
	

	son_2_2 s2;
	s2.content();

}

int main()
{
	test01();


	system("pause");
	return 0;
}