#include <iostream>
using namespace std;

class IShape {
public:
    virtual void draw() = 0; // 虛擬函式
    virtual ~IShape() {} // 虛擬解構子
};

class Circle : public IShape {
public:
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }
};

class Rectangle : public IShape {
public:
    void draw() override {
        cout << "Drawing a Rectangle" << endl;
    }
};

int main()
{
    IShape* shape1 = new Circle();
    IShape* shape2 = new Rectangle();

    shape1->draw();
    shape2->draw();

    delete shape1;
    delete shape2;

    return 0;
}