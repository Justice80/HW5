#ifndef TRANSACTOIN_H
#define TRANSACTION_H
#include <iostream>
#include <string>
#include <vector>
#include "Date.h"

using namespace std;

class Transaction {
private:
	Date dateTransaction;
	char type;
	double amount;
	double balance;
	string description;
public:
	Transaction();

	Transaction(Date newDateTransaction, char newType, double newBalance, string newDescription){
		dateTransaction = newDateTransaction;
		type = newType;
		balance = newBalance;
		description = newDescription;
		print();
	}

	void print(){
		cout << dateTransaction.getDay() << "-" << dateTransaction.getMonth() << "-" << dateTransaction.getYear() <<
			"\t" << balance << "\t" << type << "\t" << description << "\t" << endl;
	}
};

#endif