#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	string r;
	r=s;
	int n1=0,n0=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='0')
		n0++;
		else
		n1++;
	}
	if(n0==0||n1==1)
	cout<<-1<<endl;
	else
	{
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
		cout<<r<<" "<<s<<endl;
	}
	return 0;
}
