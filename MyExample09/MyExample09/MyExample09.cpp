#include <iostream>
using namespace std;

// 運算式
int main()
{
    int a = 10;
    int b = 10;
    int sum = a + b;
    int diff = a - b;
    int prod = a * b;
    int div = a / b;
    int mod = a % b;

	cout << "a + b: " << sum << endl;
	cout << "a - b: " << diff << endl;
	cout << "a * b: " << prod << endl;
	cout << "a / b: " << div << endl;
	cout << "a % b: " << mod << endl;
    
    bool result1 = (a == b);
    bool result2 = (a != b);
    bool result3 = (a > b);
	bool result4 = (a < b);
	cout << "a == b: " << result1 << endl;
	cout << "a != b: " << result2 << endl;
	cout << "a > b: " << result3 << endl;
	cout << "a < b: " << result4 << endl;

    bool x = true;
    bool y = false;
    bool andExp = (x && y);
    bool orExp = (x || y);
    bool notExp = (!x);
	cout << "x && y: " << andExp << endl;
	cout << "x || y: " << orExp << endl;
	cout << "!x: " << notExp << endl;

    int c = 10;
    c += 5;
    cout << c << endl;
    c *= 2;
    cout << c << endl;

    int p = 6;  // 0110
    int q = 3;  // 0011
    int r1 = p & q; // AND → 0010 (2)
    int r2 = p | q; // OR  → 0111 (7)
    int r3 = p ^ q; // XOR → 0101 (5)
    int r4 = p << 1; // 左移 → 1100 (12)
    int r5 = p >> 1; // 右移 → 0011 (3)

    int age = 20;
    string status = (age >= 18) ? "Adult" : "Minor";
	cout << "Status: " << status << endl;

    return 0;
}