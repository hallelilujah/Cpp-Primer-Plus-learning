#include <iostream>
double* fill_array(double *,double*);
void show_array(const double*,const double*);
int main()
{
	double array[5];
	double *ps=array;
	double *pe=fill_array(ps,ps+4);
	show_array(ps,pe);
    return 0;
}
double* fill_array(double *a,double*b)
{
	using namespace std;
	double temp;
	for(int j=1;a<=b;a++,j++)//注意这里的<=
	{
		cout<<"enter value #"<<j<<": ";
		cin>>temp;
		if(!cin)
		{
			cin.clear();
			while(cin.get()!='\n')
			    continue;
			cout<<"bad input.";
			break;
		}
		else if(temp<0)break;
		*a=temp;
	}
	return a;
}
void show_array(const double* a,const double* b)
{
	for(;a<b;a++)//注意这里的<
	{
		std::cout<<"the array:";
		std::cout<<*a<<std::endl;
	}
}
