#include <iostream>
#include <string>
using namespace std;

//��̬��ϰ  ������Ʒ

//������Ʒ�ĳ�����
class AbstractDrinking
{
public:
	//��Ʒ
	void makeDrink()
	{
		Boil();
		Brew();
		PutSomethin();
		PourInCup();
		
	}
	//��ˮ
	virtual void Boil() = 0;
	//����
	virtual void Brew() = 0;
	//����
	virtual void PutSomethin() = 0;
	//ʢװ
	virtual void PourInCup() = 0;
};

//��������
class Coffee : public AbstractDrinking
{
public:
	//��Ʒ
	void makeDrink()
	{
		Boil();
		Brew();
		PutSomethin();
		PourInCup();

	}
private:
	//��ˮ
	void Boil() 
	{
		cout << "��ˮ" << endl;
	}
	//����
	void Brew()
	{
		cout << "���ݿ���" << endl;
	}
	//����
	void PutSomethin()
	{
		cout << "����ţ��" << endl;
	}
	//ʢװ
	void PourInCup()
	{
		cout << "װ�뱭��" << endl;
	}
};

//������
class Tea : public AbstractDrinking
{
public:
	//��Ʒ
	void makeDrink()
	{
		Boil();
		Brew();
		PutSomethin();
		PourInCup();

	}
private:
	//��ˮ
	void Boil()
	{
		cout << "��ˮ" << endl;
	}
	//����
	void Brew()
	{
		cout << "�ݲ�" << endl;
	}
	//����
	void PutSomethin()
	{
		cout << "�������-����" << endl;
	}
	//ʢװ
	void PourInCup()
	{
		cout << "װ�뱭��" << endl;
	}
};
void test01() {
	//ͨ���������
	Coffee coffee;
	Tea tea;
	AbstractDrinking& ad1 = tea;
	//ͨ��ָ��
	AbstractDrinking* ad2 = new Coffee;
	ad1.makeDrink();

	ad2->makeDrink();

}

int main() {

	test01();
	system("pause");
	return 0;
}