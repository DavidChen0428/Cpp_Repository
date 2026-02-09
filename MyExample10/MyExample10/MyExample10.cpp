#include <iostream>
using namespace std;

int main()
{
    int score = 100;
	double pi = 3.14;
    char grade = 'A';
	float temperature = 36.5f;
	string name = "David Chen";
	bool isPassed = 0;
    
	cout << "Score: " << score << endl;
	cout << "Pi: " << pi << endl;
	cout << "Grade: " << grade << endl;
	cout << "Temperature: " << temperature << endl;
	cout << "Name: " << name << endl;
	cout << "Passed: " << (isPassed ? "true" : "false") << endl;

	const double gravity = 9.8;
	cout << "Gravity: " << gravity << endl;

	return 0;
}