#include <iostream>
using namespace std;

class Animal {
public:
	void PrintMethod() {
		cout << "�θ�����" << endl;
	}
};

class Cat : public Animal {
public:
	void PrintMethod() {
		Animal::PrintMethod();
		cout << "�ڽİ����" << endl;
	}
};
int main() {
	Cat cat;
	cat.PrintMethod();		// �ùٸ��� �������̵��� �޼ҵ尡 ȣ���
	return 0;
}