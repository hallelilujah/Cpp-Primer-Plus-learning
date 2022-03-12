#include <iostream>
using namespace std;
double add(double,double);
double min(double,double);
double pro(double,double);
double calculate(double,double,double(*)(double,double));//注意这里引用函数指针的语法 
double (*pf[3])(double,double)={add,min,pro};//注意这里初始化函数指针数组的语法 
int main()
{
	
	for (int i=0;i<3;i++)
	{
		cout<<calculate(2.5,10.4,pf[i])<<endl;
	}
    return 0;
}
double add(double a,double b)
{
	return a+b;
}
double min(double a ,double b)
{
	return b-a;
}
double pro(double a,double b)
{
	return a*b;
}
double calculate(double a,double b,double (*c)(double,double))
{
	return (*c)(a,b);//注意如何调用参数为函数指针的函数 
}
