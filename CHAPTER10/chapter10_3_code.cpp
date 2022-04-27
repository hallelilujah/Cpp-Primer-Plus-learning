//头文件
#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <string>

class Golf {
	private:
		static const int Len =
		    40;//类的static成员属于类本身，在类加载时就会分配内存，可以通过类名::直接访问；非static成员属于类的对象，即在创建实例对象时才会得到内存分配，然后通过对象调用

		char fullname[Len];
		int handicap;
	public:
		Golf();
		Golf(const char *name, int hc);
		~Golf();
		void setgolf(const char *name, int hc) ;
		void hand(int hc);
		void showgolf() const;
};

#endif

//源代码 函数定义
#include <iostream>
#include "person01.h"
#include <cstring>

using namespace std;

Golf::~Golf() {
}

Golf::Golf(const char *name, int hc) {
	strncpy(fullname, name, Len); //注意这里的赋值
	fullname[Len - 1] = '\0';
	handicap = hc;
}

Golf::Golf() {
	strncpy(fullname, "no one", Len);
	fullname[Len - 1] = '\0';
	handicap = 0;
}

void Golf::setgolf(const char *name, int hc)  {
	*this = Golf(name, hc); //注意这里
}

void Golf::hand(int hc) {
	handicap = hc;
}

void Golf::showgolf() const {
	cout << "name: " << fullname << " ";
	cout << "handicap: " << handicap << endl;
}

//源代码 主函数
#include <iostream>
#include "person01.h"
using namespace std;

int main() {
	Golf arr[2] = {
		Golf("ann birdfree", 24),
		Golf()
	};
	arr[0].showgolf();
	arr[1].showgolf();
	arr[1].setgolf("Cnn bird", 22);
	arr[0].hand(30);
	arr[0].showgolf();
	arr[1].showgolf();

	return 0;
}
