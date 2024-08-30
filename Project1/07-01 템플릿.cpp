#include <iostream>
#include <string>

using namespace std;

// 함수 오버로딩 - 번거롭고 유연하지 않음
int sum(int a, int b) { return a + b; }
float sum(float a, float b) { return a + b; }
string sum(string a, string b) { return a + b; }

void main(void) 
{
	cout << sum(1, 2) << endl;
	cout << sum(1.f, 2.f) << endl;
	cout << sum("1", "2") << endl;
}