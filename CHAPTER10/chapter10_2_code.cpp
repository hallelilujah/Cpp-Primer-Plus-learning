//头文件
#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <string>

class Person {
	private:
		static const int LIMIT = 25;
		std::string lname;
		char fname[LIMIT];
	public:
		Person() {
			lname = "";
			fname[0] = '\0';
		}
		Person (const std::string &ln, const char *fn = "Heyyou");
		void Show() const;
		void FormalShow() const;
};
#endif

//源代码 函数定义
#include <iostream>
#include "person01.h"

Person::Person (const std::string &ln, const char *fn) {
	lname = ln;
	for (int i = 0; i < LIMIT; i++) {
		fname[i] = *fn;
		fn++;
	}
}

void Person::Show() const {
	using std::cout;
	cout << "name form 1: " << fname << " " << lname;
}

void Person::FormalShow() const {
	using std::cout;
	cout << "name form 2: " << lname << "," << fname;//cout打印完整的字符数组
}

//源代码 主函数
#include <iostream>
#include "person01.h"

using namespace std;

int main() {
	Person one;
	Person two("Smythecraft");
	Person three("Dimwiddy", "Sam");
	one.Show();
	cout << endl;
	one.FormalShow();
	cout << endl;
	two.Show();
	cout << endl;
	two.FormalShow();
	cout << endl;
	three.Show();
	cout << endl;
	three.FormalShow();
	return 0;
}
