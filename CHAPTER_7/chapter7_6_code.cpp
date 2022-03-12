//注意反转数组的写法
#include <iostream>
int fill_array(double [],int);
void show_array(const double [],int);
void reverse_array(double [],int);
int main()
{
	using namespace std;
	double array[20];
	int num = fill_array(array,20);
	show_array(array,num);
	reverse_array(array,num);
	cout<<"the reverse array:";
	for(int i=0;i<num;i++)cout<<array[i]<<" ";
    return 0;
}
int fill_array(double a[],int b)
{
	double x;
	int i;
	for(i=0;i<b;i++)
	{
		if(std::cin>>x)a[i]=x;
		else break;
	}
return i;
}
void show_array(const double a[],int b)
{
	std::cout<<"the array: ";
	for(int i=0;i<b;i++)
	std::cout<<a[i]<<" ";
}
void reverse_array(double a[],int b)
{
	for (int i = 0, j = b - 1; i < j; ++i, --j) {
        double temp = a[j];
        a[j] = a[i];
        a[i] = temp;}
}
