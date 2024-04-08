#include <iostream>
#include <string>
using namespace std;

// class는 default가 private이다.
class Student {
	int hakbun_;
	string name_;
};


void main(void) {

	Student juyoung;

	juyoung.hakbun_ = 2115;
	juyoung.name_ = "윤주영";
}