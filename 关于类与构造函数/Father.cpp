#include "Father.h"

//�޲ι���
Father::Father() {
	cout << "Father --  �޲ι���" << endl;
};
//�вι���
Father::Father(string name, House house) {
	cout << "Father --  �вι���" << endl;
};
// ��������
Father::Father(const Father* f) {
	cout << "Father --  ��������" << endl;
	//ǳ���������  Ĭ��Ϊǳ����  ��ֱ��ͨ���ȺŸ�ֵ
	
	Father::m_house = f->m_house;
	Father::m_name = f->m_name;

	//ǳ����������  ��ǳ�����������г��ֶ����е�����ʱ
	//ǳ�������ᴴ��һ���µĶ���,����ֱ���������еĶ�������
	//��ԭ�����뿽�������������ͬһ�������е�����
	//��ᵼ�µ����������ͷŶ����е��ڴ�ʱ �ظ��ͷ�
	//���������  House����

};
Father::~Father() {
	cout << "Father --  ��������" << endl;
};