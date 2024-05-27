#include <iostream>
using namespace std;

class Animal {
public:
	void PrintMethod() {
		cout << "부모고양이" << endl;
	}
};

class Cat : public Animal {
public:
	void PrintMethod() {
		Animal::PrintMethod();
		cout << "자식고양이" << endl;
	}
};
int main() {
	Cat cat;
	cat.PrintMethod();		// 올바르게 오버라이딩된 메소드가 호출됨
	return 0;
}