#include <iostream>
#include <string>
using namespace std;

//�̳��еĶ���ģ��
//���������зǾ�̬��Ա,�����ж���̳�
//�����е�˽�г�Ա���Ա����������ض����·��ʲ���,����Ȼ���̳��� 
//��֤����,ͨ��Visual Studio��������ʾ���߲鿴����ģ��
//��ת�������·���� ʹ�� cd ����·�� ,�������c��,����ת��������̷�  �̷�:
//�鿴����
//cl /d1 reportSingleClassLayout���� �ļ���

class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son : public Base
{
public :
	int m_D;
};
	
class GrandSon : public Son
{
public :
	int m_E;
};

void test01()
{
	Son son;
	cout << "Son��ռ���ڴ�ռ�Ϊ: " << sizeof(son) << endl;
	GrandSon grandSon;
	cout << "grandSon��ռ���ڴ�ռ�Ϊ: " << sizeof(grandSon) << endl;
}



int main() {
	test01();
	system("pause");
	return 0;
}