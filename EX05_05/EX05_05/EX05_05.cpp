//12.25 New Account class
#include <iostream>
#include <string>
#include <vector>
#include "Account.h"

using namespace std;

int main() {

	Account myAcct(0.015, 1000.00,  1122, "George");
	cout << "Account Holder Name: " << myAcct.getName() << endl;
	cout << "Monthly Interest: " << myAcct.getMonthlyInterestRate() << endl;
	cout << "Balance: " << myAcct.getBalance() << endl;
	cout << "\n\nAccount summary\n";
	cout << "DAY\t\tAMOUNT\tTYPE\tDESCRIPTION\n";
	myAcct.deposit(30.00);
	myAcct.deposit(40.00);
	myAcct.deposit(50.00);
	myAcct.withdraw(5.00);
	myAcct.withdraw(4.00);
	myAcct.withdraw(3.00);

	return 0;
}