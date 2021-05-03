#include "House.h"

//�޲ι���
House::House() : m_size(0), m_money(NULL)
{
	cout << "House --  �޲ι���" << endl;
};
//�вι���
House::House(double size, double* money) : m_money(money),m_size(size)
{
	cout << "House --  �вι���" << endl;
};
// ��������
House::House(const House& h) : m_size(h.m_size), m_money(NULL != h.m_money ? new double(*h.m_money) : NULL)
{
	cout << "House --  ��������" << endl;
	//���  ���ڽ��ǳ��������������
	//�ڸ��ƶ�������ʱ,������Դ�����еĵ�ַ
	//ͨ������һ���µĶ����ռ�,Ȼ��ֵΪԴ��ַ�Ľ�����
	//Ȼ���ȡ�ö����ĵ�ֵַ
	//���´���һ��������ڴ� �ڴ����Ĵ�С��Դ�ļ���ͬ
	
};
House::~House() {
	if (NULL != House::m_money) {
		delete House::m_money;
		House::m_money = NULL;
	}
	cout << "House --  ��������" << endl;
};