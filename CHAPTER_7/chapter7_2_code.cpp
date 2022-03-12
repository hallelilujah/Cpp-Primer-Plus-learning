#include <iostream>
const int x=10;
int input(double a[],int b);
void print(const double a[],int b);
double mean(const double a[],int b);
int main()
{
	using namespace std;
	cout<<"please enter the score: "<<endl;
	double score[10];
    int i=input(score,x);
	print(score,i);
	cout<<"the mean is: "<<mean(score,i);
    return 0;
 } 
int input(double a[],int b)
{
	int i=0;
	for(;i<b;i++)
	{
		if(std::cin>>a[i]);
		else break;
	}
	return i;
}
void print(const double a[],int b)
{
	std::cout<<"the scores:"<<std::endl;
	while(b--)
	{
		std::cout<<*(a++)<<" ";
	}
}
double mean(const double a[],int b)
{
	double mea=0.0;
	int m = b;
	while(b--)mea=mea+a[b];		
	mea=mea/m;
	return mea;
}
