#include <iostream>
const int Seasons = 4;
const char* snames[Seasons]={"spring","summer","fall","winter"};
struct outcome2{
	double out[4];
};
double outcome1[4];
void fill1(double [],int);
void fill2(outcome2 *,int);

int main()
{
	using namespace std;
	fill1(outcome1,Seasons);
	cout<<"outcome1: "<<outcome1[0]<<outcome1[1]<<outcome1[2]<<outcome1[3]<<endl;
	outcome2 ps;
	fill2(&ps,Seasons);
	cout<<"outcome2: "<<ps.out[0]<<ps.out[1]<<ps.out[2]<<ps.out[3]<<endl;
    return 0;
}

void fill1(double a[],int b)
{
	using namespace std;
	for(int i=0;i<b;i++)
	{
		cout<<"enter "<<snames[i]<<" expenses: ";
		cin>>a[i];
	}
 }

void fill2(outcome2 *a,int b)
{
	using namespace std;
	for(int i=0;i<b;i++)
	{
		cout<<"enter "<<snames[i]<<" expenses: ";
		cin>>a->out[i];
    }
}
