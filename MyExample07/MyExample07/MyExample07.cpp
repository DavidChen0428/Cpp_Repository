#include <iostream>
using namespace std;

class Base {
public:
    void hello() {
		cout << "Hello from Base!" << endl;
    }
};

class A : virtual public Base {};

class B : virtual public Base {};

class C : public A, public B {};// 菱形繼承

int main()
{
    C obj;
    obj.hello();
}
