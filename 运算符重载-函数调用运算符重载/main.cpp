#include <iostream>
#include <string>
using namespace std;

//�����������������
//�º����ǳ����,û�й̶���д��

class MyPoint
{
public:
	void operator()(string test) {
		cout << test << endl;
	}
};

void test01()
{
	MyPoint print;
	print("���Ǵ�ӡ������");//����ʹ��ʱ�ǳ������ں������� ��˱���Ϊ�º���
	//ͨ������������÷º���    MyPoint()  ������������
	MyPoint()("ͨ������������÷º���");
}


int main() {
	test01();

	system("pause");
	return 0;
}