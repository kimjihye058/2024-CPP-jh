#include <iostream>
#include <string>
using namespace std;

class wolf {
public:
     virtual void bark()        // 가상함수 선언, 다형성 구현
    {
        cout << "is barking" << endl;
    }

    virtual void howl()
    {
        cout << "is howling" << endl;
    }
};

class dog : public wolf
{
private:
    string name;
    int age;

public:
    dog(string n, int a) : name(n), age(a) {}

    void bark() override
    {
        cout << name << " is barking" << endl;
    }

    void howl() override
    {
        cout << name << " is howling" << endl;
    }

    void sit()
    {
        cout << name << " is sitting" << endl;
    }
};

int main()
{
    dog myDog("Buddy", 3);
    myDog.bark();
    myDog.howl();
    myDog.sit();

    // 직접 wolf 객체 생성 및 메소드 호출
    wolf myWolf;
    myWolf.bark();
    myWolf.howl();

    return 0;
}
