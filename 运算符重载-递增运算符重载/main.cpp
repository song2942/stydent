#include <iostream>
#include <string>
using namespace std;

//���ص��������


//�Զ������α���
class MyInteger {

	friend ostream& operator<<(ostream& cout, const MyInteger& p);

public:
	MyInteger() {
		m_Num = 0;
	}

	//���ص��������  ������Ϊ ǰ�õ�������õ���
	//ǰ�õ���   ����������Ϊ�˶�ͬһ�����ݽ��е���
	//����ֵ�����ö�����ֵ��ԭ��,ֵ�ᴴ��һ���µı���,���¶�����ʱ,������ֵ���������ͬһ��������
	//�������򲻻�,ʹ�����÷��ص�һֱ��ͬһ��ֵ
	MyInteger& operator++()
	{
		//�Ƚ��е�������
		 m_Num = m_Num + 1;
		 //Ȼ�󷵻�����
		 return *this;
	}
	//���õ���
	//int��ʾռλ����  ������������ǰ�õ�������õ��� ע:ֻ��дint
	//Ϊʲô�˴��ķ���ֵ����Ϊֵ����������
	//���ڷ��ص���һ���ֲ�����,�����������,�ڴ˷���ִ����ɺ�,�ֲ��������ͷ�,֮���ٲ�����ֵ���ǷǷ�����
	MyInteger operator++(int) 
	{
		//�ȼ�¼�����״̬
		MyInteger tmp = *this;
		//Ȼ����е����Ĳ���
		m_Num = m_Num + 1;
		//��󷵻�����
		return tmp;	 
	}

private:
	int m_Num;
};



//�������������
//��Ϊ��cout << myint++��ʱ���൱�ڵ��á�ostream & operator<<(ostream & cout, const MyIntger & myint)��������
//��myint++��Ϊ���ڶ����������룬myint++Ҳ�൱�ڵ����ˡ�MyIntger operator++(int)�������һ��ֵ���͵ķ��أ�
//�����ֵ������ֻ���ġ������ڵ���operator << ����ʱ���βεü�const

ostream& operator<<(ostream& cout, const  MyInteger& p) {
	cout << p.m_Num;
	return cout;
}


void test01() {
	MyInteger myInt;
	cout << ++myInt << endl;
	cout << myInt++ << endl;

	cout << myInt << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}