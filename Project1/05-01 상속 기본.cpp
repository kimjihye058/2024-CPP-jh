#include <iostream>
#include <string>
using namespace std;

class Person {
public:
	Person(string name, int age)
		: name_(name), age_(age) 
	{
		cout << "부모 생성자 호출" << endl;
	}

	~Person()
	{
		cout << "부모 소멸자 호출" << endl;
	}

	void show_person(void) {
		cout << name_ << "의 나이는 " << age_ << "입니다." << endl;
	}

private:
	string name_;
	int age_;
};

// Person의 자식(파생) 클래스
class Student : public Person {
public:
	// 부모(기본) 클래스의 생성자가 먼저 호출되어야 한다.
	Student(int id, string name, int age) : Person(name, age), id_(id)
	{
		cout << "자식 생성자 호출" << endl;
	}

	~Student()
	{
		cout << "자식 소멸자 호출" << endl;
	}

	void show_person(void)
	{
		cout << "학번" << id_ << endl;
		Person::show_person();
	}
private:
	int id_;
};

int main(void)
{
	// Student 객체 Kim을 동적 할당으로 생성
	Student* Kim = new Student(2104, "Kimjihye", 18);
	Kim->show_person();

	// 메모리 해제
	delete Kim;

	return 0;
}