#include "House.h"

typedef class Father {
public:
	//�޲ι���
	Father();
	//�вι���
	Father(string name, House house);
	//��������
	Father(const Father& f);
	//����
	~Father();
private:
	string m_name;//����
	House m_house;//����
}father;