/*此题目主要学习将结构作为函数参数传递，以及函数返回结构。
结构作为函数参数传递时，有三种方法，这里介绍了1.传递返回整个结构2.传递结构的地址两种方法。*/
#include <iostream>
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
void func1(box);
box func2(box*,float, float, float);

int main()
{
	using namespace std;
	float x1,x2,x3;
	x1=x2=x3=2;
	box f1={"flank",12.1,12.2,12.3,20.1};
	func1(f1);
	box f2=func2(&f1,x1,x2,x3);
	cout<<"the change volume:"<<f2.volume;
    return 0;
}
//传递整个结构
void func1(box a)
{
	using namespace std;
    cout<<"maker: "<<a.maker<<endl;
    cout<<"height: "<<a.height<<endl;
    cout<<"width: "<<a.width<<endl; 
    cout<<"length: "<<a.length<<endl;
    cout<<"volume: "<<a.volume<<endl;
}
//传递结构地址，且返回结构地址
box func2(box * a,float b, float c, float d)
{
	a->volume=b*c*d;//传递结构地址时，不能再用成员运算符
	return *a;//注意这里返回的是指针，指向结构a的地址
}
