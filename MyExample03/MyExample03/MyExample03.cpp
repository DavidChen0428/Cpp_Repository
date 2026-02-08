#include <iostream>
using namespace std;

class Account {
private:
    double balance;
public:
    Account(double initialBalance) {
        balance = initialBalance;
	}
    void deposit(double b) {
		balance += b;
	}
    double getBalance() {
        return balance;
    }
};

int main()
{
    Account myAccount(100.0);
    myAccount.deposit(50.0);
    cout << "Current balance: " << myAccount.getBalance() << endl;
}