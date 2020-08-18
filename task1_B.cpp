#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int count=0;
void sym(int n,string a)
{
	int mid=n/2;
	string c1=a.substr(0,mid);
	string c2=a.substr(mid, mid);
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
