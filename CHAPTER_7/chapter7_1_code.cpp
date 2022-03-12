#include <iostream>
const double x=2.0;
double mean(double a,double b);
int main()
{
	using namespace std;
	cout<<"please enter two numbers: "<<endl;
	double x,y;
	cin>>x>>y;
	while(x!=0&&y!=0)
	{
		cout<<"the result is: "<<mean(x,y)<<endl;
		cin>>x>>y;
    }
    return 0;
 } 
double mean(double a,double b)
{
	return(x*a*b/(a+b));
}
