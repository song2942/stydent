#include <iostream>
#include <string>
using namespace std;

//ͬ����Ա�Ĵ���ʽ
//�������븸���г���ͬ����Աʱ,
//�������з�������ĳ�Աֱ��ʹ�����Ƽ���
//���ʸ���ĳ�Ա��Ҫ��� ������(����::)
//ͬ����Ա�����Ĵ���ʽ ���Ա�Ĵ���ʽ��ͬ
//��������ظ�������ͬ����Ա����(�����������صĳ�Ա����)


class Base {
public:
	Base() 
	{
		m_A = 10;
	}

	void func() {
		cout << "����ĳ�Ա����" << endl;
	}

	void func(int a) {
		cout << "����ĳ�Ա���� int a" << endl;
	}

	int m_A;
};

class Son : public Base
{
public:
	Son()
	{
		m_A = 20;
	}
	void func() {
		cout << "����ĳ�Ա����" << endl;
	}

	int m_A;
};
	 
void test01() {
	Son s;
	cout << "s.m_A��ֵΪ: " << s.m_A << endl;
	cout << "s.Base::m_A��ֵΪ: " << s.Base::m_A << endl;
	s.Base::func();
}

int main() {
	test01();


	system("pause");
	return 0;
}