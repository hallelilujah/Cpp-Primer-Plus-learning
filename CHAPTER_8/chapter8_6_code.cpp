#include <iostream>
#include <cstring>
using namespace std;
template <typename T> T maxn(T * a,const int b);
template <> char* maxn(char * a[],const int b);//注意数组指针和指针数组的区别
int main() {
	int num1[6]={0,1,2,3,4,5};
	double num2[4]={1.1,2.2,3.3,4.4};
	char * num3[5]={"wish","i","was","bullet","proof"};
	cout<<maxn(num1,6)<<endl;
	cout<<maxn(num2,4)<<endl;
  cout<<maxn(num3,5)<<endl;
  return 0;
}
template <typename T> 
T maxn(T * a,const int b)
{
	T max=a[0];
	for(int i=1;i<b;i++)
	{
		if(max<a[i])
		max=a[i];
		else continue;
	}
	return max;
}

template <> 
char* maxn(char * a[],const int b)
{
	char * max=a[0];
	for(int i=1;i<b;i++)
	{
		if(strlen(max)<strlen(a[i]))
		max=a[i];
		else continue;
	}
	return max;
}
