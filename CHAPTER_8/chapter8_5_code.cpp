#include <iostream>
using namespace std;
template <typename T> T max5(const T * a);
int main() {
	int num1[5]={0,1,2,3,4};
	double num2[5]={1.1,2.2,3.3,4.4,5.5};
	cout<<max5(num1)<<endl;
	cout<<max5(num2)<<endl;
   
    return 0;
}
template <typename T> T max5(const T * a)
{
	T max=a[0];
	for(int i=1;i<5;i++)
	{
		if(max<a[i])
		max=a[i];
		else continue;
	}
	return max;
}
