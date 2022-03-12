#include <iostream>
using namespace std;
const int SLEN=30;
struct student{
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};
int getinfo(student [],int);
void display1(student );
void display2(const student * );
void display3(const student [],int);
int main()
{
	cout<<"enter class size: ";
	int class_size;
	cin>>class_size;
	while(cin.get()!='\n')
	    continue;
	student *ptr_stu=new student[class_size];
	int entered=getinfo(ptr_stu,class_size);
	for(int i=0;i<entered;i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu,entered);
	delete [] ptr_stu;
	cout<<"done\n";
    return 0;
}
int getinfo(student pa[],int n)
{
	int i=0;
	for(;i<n;i++)
	{
		cout<<"\nplease enter "<<i+1<<"student's name: ";
		if(cin>>pa[i].fullname);
		else break;
	}
	return i;//注意这里不是i+1，因为break后仍然会i++
}
void display1(student st)
{
	cout<<"display1: "<<st.fullname<<endl;
}
void display2(const student * ps)
{
	cout<<"display2: "<<ps->fullname<<endl;
}
void display3(const student pa[],int n)
{
	cout<<"display3: "<<endl;
	for(int i=0;i<n;i++)
	cout<<pa[i].fullname<<endl;
}
