#include <iostream>
#include <string>
using namespace std;

//��ֵ�����������

//��c++�� ���������һ�������4������
//Ĭ�Ϲ���,�޲� ������Ϊ��
//��������,�޲� ������Ϊ��
//�������� �Ժ���ֵ���п���
//��ֵ����� operator=  ������ֵ���п���

class Person
{
public:
	//�ڶ�������������ڴ�
	Person(int age) {
		m_Age = new int(age);
	}



	//�ͷŴ���������,��������ڵĻ�
	~Person(){
		if (NULL != m_Age) {
			delete m_Age;
			m_Age = NULL;
		}
	}

	//�޸ĸ�ֵ�����
	//�޸ĵ�ԭ����ǳ��������,��ֵ����һ����ֱ�ӽ���ֵַ�����������´���һ���ڴ�,����һ����Ҫ���¶���
	Person& operator=(Person& p) {
		//ע�˴��޷�������������
		//�����������ڸö����ͷ�ʱ�Զ����õ�
		if (NULL != m_Age) {
			delete m_Age;
			m_Age = NULL;
		}

		  this->m_Age = new int(*p.m_Age);
		  return *this;
	}

//private:
	int* m_Age;
};

void test01() {
	Person p1(18),p2(20),p3(30);
	p2 = p1 = p3;
	 
	cout << "p1��������: " << *p1.m_Age << " ��ַ��: " << p1.m_Age<< endl;
	cout << "p2��������: " << *p2.m_Age << " ��ַ��: " << p2.m_Age << endl;
	cout << "p3��������: " << *p3.m_Age << " ��ַ��: " << p3.m_Age << endl;

}


int main()
{
	test01();


	system("pause");
	return 0;
}