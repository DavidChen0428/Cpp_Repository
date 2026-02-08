#include <iostream>
using namespace std;

class Engine {
public:
    void start() {
        cout << "Engine started." << endl;
    }
};

class Radio {
 public:
    void playMusic() {
		cout << "Playing music." << endl;
	}
};

class Car : public Engine, public Radio {
public:
    void drive() {
        cout << "Car is driving." << endl;
    }
};

int main()
{
    Car myCar;
    myCar.start();
    myCar.playMusic();
    myCar.drive();
    return 0;
}

