#include <iostream>
#include <string>

using namespace std;

class Animal {
public:		// 멤버 함수
	Animal() {

	}

	Animal(string name, unsigned int age) 
		: name_(name), age_(age)
	{
		cout << "이름 " << name_ << endl;
		cout << "나이 " << age_ << endl;
	}

	virtual void bark() {		// 부모에 가상함수(virtual) 선언
		cout << "잘 짖는다." << endl;
	}

	virtual void sleep() {
		cout << "잘 잔다." << endl;
	}

	virtual void eat() {
		cout << "잘 먹는다." << endl;
	}

private:		// 멤버 변수
	string name_;
	unsigned int age_;		// 음의 부호가 없는 int

};

class Human : public Animal {
public:
	// 부모(Animal) 생성자가 먼저 호출된다.
	Human(string name, unsigned int age, bool right) 
		: Animal(name, age), right_(right)
	{
		cout << "인권존재여부 " << right_ << endl;
	}

	// TODO : 정적 바인딩(C++)을 동적 바인딩(JAVA)으로 고치기
	// 정적 바인딩 -> 컴파일 시간에 어떤 함수를 사용할 지 결정
	// 동적 바인딩 -> 런타임(실행) 시간에 어떤 함수를 사용할 지 결정
	void bark() {
		cout << "톡톡" << endl;
	}

	void sleep() {
		cout << "쿨쿨" << endl;
	}

	void eat() {
		cout << "냠냠" << endl;
	}

private:
	bool right_;
};

void main(void)
{
	Animal* ani = new Animal("정민레이디", 18);		// 동적할당
	ani->bark();
	ani->sleep();
	ani->eat();
	delete ani;		// 할당 해제

	// ani의 자료형은 Animal*
	ani = new Human("지우맨", 18, true);		// 동적할당
	// 정적 바인딩으로 인해 Animal의 멤버함수가 호출된다.
	ani->bark();
	ani->sleep();
	ani->eat();
	delete ani;		// 할당 해제

}