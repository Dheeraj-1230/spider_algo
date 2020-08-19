#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string st;
	cin>>st;
	char s[n],r[n];
	for(int i=0;i<n;i++)
	r[i]=s[i]=st[i];
   
	int n1=0,n0=0;   //n0=no of zeroes and n1=no of ones
	for(int i=0;i<n;i++)
	{
		if(s[i]=='0')
		n0++;
		else
		n1++;
	}
	if(n0==0||n1==0)
	cout<<-1<<endl;
	else
	{
		//print average as one less than and one greater than the given binary code
		for(int i=n-1;i>=0;i--)
		{
			if(s[i]=='1')
			{
				s[i]='0';
				break;
			}
			else if(s[i]=='0')
			s[i]='1';
		}
		for(int i=n-1;i>=0;i--)
		{
				if(r[i]=='0')
			{
				r[i]='1';
				break;
			}
			else if(r[i]=='1')
			r[i]='0';
		}
	for(int i=0;i<n;i++)
	cout<<s[i];
	cout<<" ";
	for(int i=0;i<n;i++)
	cout<<r[i];
	cout<<endl;
	}

	return 0;
}
