#include <iostream>
#include <string>
#include <vector>

using namespace std;

class PrettyJ {
private:
	static int num_;
	int gam_;
	string name_;
public:
	PrettyJ(int gam, string name) : gam_(gam), name_(name)
	{
		num_++;
	}
	static int* get_address_num(void) { return &num_; }
	static int get_num(void) { 
		// gam_++; // static 멤버함수에는 일반 멤버변수가 들어갈 수 없다.
		return num_; 
	}		// static  멤버 변수는 정적 멤버만 접근 가능
	int* get_address_gam(void) { return &gam_; }
	int get_gam(void) { return gam_; }
};

// static 멤버변수 초기화는 바깥에서 하자.
int PrettyJ::num_ = 0;

void main(void)
{
	PrettyJ* jihye = new PrettyJ(508, "지혜");
	PrettyJ* juyoung = new PrettyJ(509, "주영");
	PrettyJ* jungmin = new PrettyJ(716, "정민");
	cout << "현재 멤버 인원은 " << PrettyJ::get_num() << endl;

	PrettyJ* jiwoo = new PrettyJ(601, "지우");
	cout << "현재 멤버 인원은 " << PrettyJ::get_num() << endl;

	cout << "지혜 gam의 주소" << jihye->get_address_gam() << endl;
	cout << "지우 gam의 주소" << juyoung->get_address_gam() << endl;
	cout << "정민 gam의 주소" << jungmin->get_address_gam() << endl;
	cout << "지우 gam의 주소" << jiwoo->get_address_gam() << endl;

	// satic변수 num은 모두 공유하기 때문에 num의 값은 모두 같음
	// 공유를 할 수 있으면서 전역적으으로) 사용(전역변수)할 수 있기 떄문에
	
	cout << "지혜 num의 주소" << jihye->get_address_num() << endl;
	cout << "지우 num의 주소" << juyoung->get_address_num() << endl;
	cout << "정민 num의 주소" << jungmin->get_address_num() << endl;
	cout << "지우 num의 주소" << jiwoo->get_address_num() << endl;

	delete jiwoo;	
	delete jungmin;
	delete juyoung;
	delete jihye;
	
}