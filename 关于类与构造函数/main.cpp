#include "Father.h"


void f1() {
	house h1(1, new double(10000.0));
	
	house h2(h1);
	
}


class test {
public :
	static void t1() {};

};


int main() {
	test * pt = NULL;  //ע�� ��ָ���ǿ��Է��ʳ�Ա������,��������õĺ����л�ȡ��ֵ,�ᵼ�³������,������ҪԤ�������������
	cout << pt->t1 << endl;


	//f1();
	system("pause");
	return 0;
}