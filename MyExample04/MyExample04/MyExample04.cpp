#include <iostream>
using namespace std;

class Car {
private:
    string name;
public:
    Car(string name) { cout << "Car " << name << " created!" << endl; }
	~Car() { cout << "Car " << name << " destroyed!" << endl; }
    void process() {
		cout << "Car " << name << " is processing!" << endl;
    }
};

int main()
{
    {
        Car car("Benz");
        car.process();
    }
    return 0;
}
