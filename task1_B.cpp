#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int count=0;    //required output variable
void sym(int n,string a)
{
	int mid=n/2;
	string c1=a.substr(0,mid);  // first half string
	string c2=a.substr(mid, mid);   //second half string
	if(mid!=0 && c1.compare(c2)==0)
	{
		count++;
		sym(mid,a);
	}
}
int main()
{
	int n;
	string a;
	cin>>n;
	cin>>a;
	sym(n,a);
	cout<<count<<endl;
	return 0;
}
