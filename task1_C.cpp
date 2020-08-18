#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	int i;
	for(i=min(a,b);i>=1;i--)
	{
		if(a%i==0&&b%i==0)
		break;
	}
	return i;
}
int main()
{
	int arr[6]={0};
	int a,b,c,d;
	cout<<1<<" "<<2<<endl;
	cin>>a;
	cout<<2<<" "<<3<<endl;
	cin>>b;
	arr[1]=gcd(a,b);
	arr[0]=a/arr[1];
	arr[2]=b/arr[1];
	cout<<4<<" "<<5<<endl;
	cin>>c;
	cout<<5<<" "<<6<<endl;
	cin>>d;
	arr[4]=gcd(c,d);
	arr[3]=c/arr[4];
	arr[5]=d/arr[4];
	for(int i=0;i<6;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}
