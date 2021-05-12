#include <iostream>
#include <string>
using namespace std;

//多态练习  制作饮品

//制作饮品的抽象类
class AbstractDrinking
{
public:
	//成品
	void makeDrink()
	{
		Boil();
		Brew();
		PutSomethin();
		PourInCup();
		
	}
	//煮水
	virtual void Boil() = 0;
	//冲泡
	virtual void Brew() = 0;
	//加料
	virtual void PutSomethin() = 0;
	//盛装
	virtual void PourInCup() = 0;
};

//制作咖啡
class Coffee : public AbstractDrinking
{
public:
	//成品
	void makeDrink()
	{
		Boil();
		Brew();
		PutSomethin();
		PourInCup();

	}
private:
	//煮水
	void Boil() 
	{
		cout << "煮水" << endl;
	}
	//冲泡
	void Brew()
	{
		cout << "冲泡咖啡" << endl;
	}
	//加料
	void PutSomethin()
	{
		cout << "加入牛奶" << endl;
	}
	//盛装
	void PourInCup()
	{
		cout << "装入杯中" << endl;
	}
};

//制作茶
class Tea : public AbstractDrinking
{
public:
	//成品
	void makeDrink()
	{
		Boil();
		Brew();
		PutSomethin();
		PourInCup();

	}
private:
	//煮水
	void Boil()
	{
		cout << "煮水" << endl;
	}
	//冲泡
	void Brew()
	{
		cout << "泡茶" << endl;
	}
	//加料
	void PutSomethin()
	{
		cout << "加入枸杞-大量" << endl;
	}
	//盛装
	void PourInCup()
	{
		cout << "装入杯中" << endl;
	}
};
void test01() {
	//通过对象调用
	Coffee coffee;
	Tea tea;
	AbstractDrinking& ad1 = tea;
	//通过指针
	AbstractDrinking* ad2 = new Coffee;
	ad1.makeDrink();

	ad2->makeDrink();

}

int main() {

	test01();
	system("pause");
	return 0;
}