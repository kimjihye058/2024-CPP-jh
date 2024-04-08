#include <iostream>
#include <string>
using namespace std;

// 구조체는 default가 public이다.
struct Student {
	int hakbun_;
	string name_;
};


void main(void) {
	struct Student juyoung;
	juyoung.hakbun_ = 2115;
	juyoung.name_ = "윤주영";
}