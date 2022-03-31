#include <iostream>
#include <cstring>
using namespace std;
struct stringy {
    char *str;
    int ct;
};
void set(stringy & a,const char * b);
void show(stringy & a,const int b=1);
void show(char * a,const int b=1);
int main() {
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
    return 0;
}

void set(stringy & a,const char * b)
{
	a.ct=strlen(b)+1;
	a.str = new char[a.ct];//注意这里的动态分配方式 
    strcpy(a.str, b);
}

void show(stringy & a,const int b)
{
	for(int i=0;i<b;i++)
	{
		cout<<a.str<<endl;//如果给cout提供一个字符的地址，则它将从该字符开始打印，直到遇到空字符为止。 
	}
}

void show(char * a,const int b)
{	
	for(int i=0;i<b;i++)
	{
		cout<<a<<endl;
	}
}
