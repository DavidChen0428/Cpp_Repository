#include <iostream>
using namespace std;

class Dog {
public:
    string name;
    int age;

    void bark() {
        cout << name << " is barking!" << endl;
    }
};

int main()
{
    Dog myDog;
    myDog.name = "Buddy";
    myDog.age = 3;
    myDog.bark();
    return 0;
}
