#include <iostream>
#include <string>

using namespace std;

class Animal {
public:		// 멤버 함수
	void bark() {
		cout << "잘 짖는다." << endl;
	}

	void sleep() {
		cout << "잘 잔다." << endl;
	}

	void eat() {
		cout << "잘 먹는다." << endl;
	}

private:		// 멤버 변수
	string name;
	unsigned int age;		// 음의 부호가 없는 int

};

void main(void)
{
	Animal* ani = new Animal();		// 동적할당

	ani->bark();
	ani->sleep();
	ani->eat();

	delete ani;		// delete
}