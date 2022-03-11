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

void func1(box a)
{
	using namespace std;
    cout<<"maker: "<<a.maker<<endl;
    cout<<"height: "<<a.height<<endl;
    cout<<"width: "<<a.width<<endl; 
    cout<<"length: "<<a.length<<endl;
    cout<<"volume: "<<a.volume<<endl;
}

box func2(box * a,float b, float c, float d)
{
	a->volume=b*c*d;
	return *a;
}
