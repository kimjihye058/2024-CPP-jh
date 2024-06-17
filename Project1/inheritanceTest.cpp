#include <iostream>
#include <string>
using namespace std;

class wolf {
public:
     virtual void bark()        // �����Լ� ����, ������ ����
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

    // ���� wolf ��ü ���� �� �޼ҵ� ȣ��
    wolf myWolf;
    myWolf.bark();
    myWolf.howl();

    return 0;
}
