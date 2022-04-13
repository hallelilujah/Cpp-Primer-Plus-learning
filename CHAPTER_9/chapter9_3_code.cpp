#include<iostream>
#include<cstring>
struct chaff
{
	char dross[20];
	int slag;
};
const int BUF=512;
const int N=2;
char buffer[BUF];

int main()
{
	using namespace std;
	chaff *pd1, *pd2;//注意这里的指针是chaff
	pd1=new chaff[N];
	pd2=new (buffer) chaff[N];
	
		strcpy(pd1[0].dross,"aaa");
		strcpy(pd2[0].dross,"aaa");
		pd1[0].slag=pd2[0].slag=10;
		
		strcpy(pd1[1].dross,"bbb");
		strcpy(pd2[1].dross,"bbb");
		pd1[1].slag=pd2[1].slag=20;
	
	for(int i=0;i<N;i++)
	{
		cout<<pd1[i].dross<<" at "<<&(pd1[i].dross) <<" ; "<<pd1[i].slag<<" at "<<&(pd1[i].slag)<<endl;
	}
	for(int i=0;i<N;i++)
	{
		cout<<pd2[i].dross<<" at "<<&(pd2[i].dross) <<" ; "<<pd2[i].slag<<" at "<<&(pd2[i].slag)<<endl;
	}
	
	return 0;
}
