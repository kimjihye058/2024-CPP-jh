#include <iostream>
#include <string>

using namespace std;

class Animal {
public:		// 멤버 함수
	void bark() {

	}

	void sleep() {

	}

	void eat() {

	}

private:		// 멤버 변수
	string name;
	unsigned int age;		// 음의 부호가 없는 int

};

void main(void)
{
	Animal* ani = new Animal();		// 동적할당
}