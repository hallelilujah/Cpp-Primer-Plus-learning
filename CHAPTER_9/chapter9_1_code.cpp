//golf.h
const int Len=40;
struct golf
{
	char fullname[Len];
	int handicap;
};

void setgolf(golf & g, const char * name,int hc);
int setgolf(golf & g);

void handicap(golf & g,int hc);
void showgolf(const golf & g);


//golf.cpp
#include <iostream>
#include <cstring>
#include "golf.h"

using namespace std;

void setgolf(golf & g, const char * name,int hc);
int setgolf(golf & g);
void handicap(golf & g,int hc);
void showgolf(const golf & g);

void setgolf(golf & g, const char * name,int hc)
{
	strncpy(g.fullname,name,Len);//注意这里的赋值 
	g.fullname[Len-1]='\0';
	g.handicap=hc;
}

int setgolf(golf & g)
{
	cout<<"please enter name: ";
	char name[Len];
	cin.getline(name,Len);
	cout<<endl<<"please enter the handicap: ";
	int hc;
	cin>>hc;
	cin.get();
	setgolf(g,name,hc);
	if (strcmp(g.fullname,"\0")==0)return 0;//注意这里的判断 
	else return 1;
}

void handicap(golf & g,int hc)
{
	g.handicap=hc;
}

void showgolf(const golf & g)
{
	cout<<"name: "<<g.fullname<<" ";
	cout<<"handicap: "<<g.handicap<<endl;
}

//main.cpp
#include <iostream>
#include "head.h"
using namespace std;

int main()
{
	golf * ann=new golf[4];
	setgolf(ann[0], "ann birdfree",24);
	handicap(ann[0],30);
	int sum=0;
	
	for(int i=0;i<3;i++)
	{
		if(setgolf(ann[i+1])==0)break;
		++sum;
		
	}
	if(sum>0)
		{
			for(int j=0;j<sum+1;j++)
			{
				showgolf(ann[j]);
			}
		}
	delete ann;
	
	return 0;
}
