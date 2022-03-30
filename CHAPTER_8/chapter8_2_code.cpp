#include <iostream>
#include <cstring>
using namespace std;

struct CandyBar
{
	char name[40];
	double weight;
	int calories;
};
void show(CandyBar & a,const char * b,double c,int d);
void show(const CandyBar & a);

int main()
{
	CandyBar s1;
	show(s1,"Millennium Munch",2.85,350);
	show(s1);
  return 0;
}

void show(CandyBar & a, const char * b,double c,int d)
{
	strcpy(a.name, b);
	a.weight=c;
	a.calories=d;
}

void show(const CandyBar & a)
{
	cout<<a.name<<endl<<a.weight<<endl<<a.calories;
}
