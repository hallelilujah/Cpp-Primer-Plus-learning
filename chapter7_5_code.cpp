/*此题利用递归函数求解参数阶乘*/
#include <iostream>
long product(int);
int main()
{
	using namespace std;
	int num;
	while(cin>>num){
		long result=product(num);
	cout<<"the "<<num<<"! is: "<<result<<endl;
	}
    return 0;
}
//注意这个递归函数
long product(int a)
{
	if(a>0)
	return a*product(a-1);
	else return 1;
}
