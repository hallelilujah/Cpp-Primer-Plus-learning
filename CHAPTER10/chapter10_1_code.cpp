//头文件，包含类定义

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <string>

class Account {
private:
std::string name;
std::string id_number;
double saving;
public:
void show();
Account();
Account(const std::string &na, const std::string &id, double savings = 0.0);
~Account();
void deposit(double deposit);
void withdraw(double withdraw);
};

#endif

//源文件，包含类中公有函数定义
#include <iostream>
#include "account1.h"

Account::Account() {
	name = "no name";
	id_number = "0000";
	saving = 0.0;
}

Account::Account(const std::string & na, const std::string & id, double savings) {
	name = na;
	id_number = id;
	saving = savings;
}

Account::~Account() {
}

void Account::deposit(double deposit) {
	if (deposit < 0) {
		std::cout << "number of deposit can't be negative.\n";
	} else {
		saving = saving + deposit;
	}
}

void Account::withdraw(double withdraw) {
	if (saving < withdraw)
		std::cout << "the savings can't afford to withdraw.";
	else
		saving = saving - withdraw;
}

void Account::show() {
	using std::cout;
	using std::endl;
	cout << "the bank account's name: " << name << endl;
	cout << "the bank account's id number: " << id_number << endl;
	cout << "the bank account's savings: " << saving << endl;
}

//源文件，主函数
#include <iostream>
#include "account1.h"

using namespace std;

	int main() {
	Account tom("tom", "1111", 10000.1);
	tom.show();
	Account mary = Account("mary", "2222", 20000.2);
	mary.show();
	Account no_one;
	no_one.show();
	tom.deposit(1000.1);
	tom.show();
	mary.withdraw(30000);
	mary.withdraw(3000);
	mary.show();
	return 0;
}
