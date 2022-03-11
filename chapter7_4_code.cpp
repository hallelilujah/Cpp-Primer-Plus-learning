#include <iostream>
long double prob(unsigned num, unsigned cho);
int main()
{
	using namespace std;
	long double p1,p2;
	p1=prob(47,5);
	p2=prob(27,1);
	cout<<"p1:"<<p1<<"\np2:"<<p2<<"\nthe prob:"<<p1*p2;
    return 0;
}
long double prob(unsigned num, unsigned cho)
{
	long double result =1.0;
	long double n;
	unsigned p;
	for(n=num,p=cho;p>0;n--,p--)
		result=result*p/n;
	return result;
}
