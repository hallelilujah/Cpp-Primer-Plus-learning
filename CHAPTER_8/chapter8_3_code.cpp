#include <iostream>
#include <string>
#include <cctype>
using namespace std;
void change(string & a);
int main()
{
	string a;
	cout<<"Enter a string(q to quit):";
	getline(cin,a);
	while(a!="q"){		
		change(a);
		cout<<a<<endl; 
		cout<<"Next string(q to quit):";
		getline(cin,a);
	}
	cout<<"bye.";
  return 0;
}
void change(string & a)
{
	for(int i=0;a[i];i++)
	{
		a[i]=toupper(a[i]);
	}
 } 
//注意toupper是逐字符进行操作的，所以要对string拆分
