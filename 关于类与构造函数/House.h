#pragma once
#include <iostream>
#include <string>
using namespace std;

typedef class House {
public:
	//�޲ι���
	House();
	//�вι���
	House(double size, double* money);
	// ��������
	House(const House& h);
	//��������
	~House();
private:
	double m_size;//��С
	double* m_money;//�۸�
}house;
