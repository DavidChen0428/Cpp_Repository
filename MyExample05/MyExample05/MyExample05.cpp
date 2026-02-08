#include <iostream>
using namespace std;

class Animal {
public:
    Animal() {
        cout << "Animal constructor called." << endl;
	}

    ~Animal() {
		cout << "Animal destructor called." << endl;
    }

    void eat() {
        cout << "Animal is eating..." << endl;
    }

    virtual void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Barking..." << endl;
    }

    void sound() override {
        cout << "Dog barks: Woof!" << endl;
    }

    Dog() {
        cout << "Dog constructor called." << endl;
    }

    ~Dog() {
        cout << "Dog destructor called." << endl;
	}
};

class Cat : public Animal {
public:

    Cat() {
		cout << "Cat constructor called." << endl;
    }

    ~Cat() {
		cout << "Cat destructor called." << endl;
    }

    void sound() override {
        cout << "Cat meows: Meow!" << endl;
    }
};

int main()
{
    Animal animal;
    Dog dog;
    Cat cat;

    animal.eat();
    animal.sound();

    dog.eat();
    dog.sound();

    cat.eat();
    cat.sound();

    Animal* ptr = new Dog();
    ptr->sound();
    delete ptr;

    return 0;
}
