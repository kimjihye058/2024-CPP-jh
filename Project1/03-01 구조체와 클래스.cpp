﻿#include <iostream>
#include <string>
using namespace std;

// class는 default가 private이다.
class Student {
public:
	// 생성자 : 객체를 생성할 때 호출되는 함수
	// 생성자는 반환형이 없다.
	Student(int hakbun, string name) {
		hakbun_ = hakbun;
		name_ = name;
	}
private :
	int hakbun_;
	string name_;
};


void main(void) {

	Student juyoung = Student(2115, "윤주영");

}