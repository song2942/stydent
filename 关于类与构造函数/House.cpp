#include "House.h"

//�޲ι���
House::House() {
	cout << "House --  �޲ι���" << endl;
};
//�вι���
House::House(double size, double* money) {
	cout << "House --  �вι���" << endl;
};
// ��������
House::House(const House* h) {
	cout << "House --  ��������" << endl;
	//���  ���ڽ��ǳ��������������
	//�ڸ��ƶ�������ʱ,������Դ�����еĵ�ַ
	//ͨ������һ���µĶ����ռ�,Ȼ��ֵΪԴ��ַ�Ľ�����
	//Ȼ���ȡ�ö����ĵ�ֵַ

};
House::~House() {
	cout << "House --  ��������" << endl;
};