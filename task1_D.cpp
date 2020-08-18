#include<iostream>
using namespace std;
int main()
{
	int n,r,x,y;
	cin>>n>>r>>x>>y;
	int *con=new int[n];
	for(int i=0;i<n;i++)
	cin>>con[i];
	int *scn=new int[n];
	for(int i=0;i<n;i++)
	cin>>scn[i];
	int s=0;
	for(int i=0;i<n;i++)
	{
		if(scn[i]==1&&con[i]==1)
		s+=x;
		else if(con[i]==1&&scn[i]==0)
		s-=y;
	}
	if(s>0)
	cout<<"promoted";
	else
	cout<<"demoted";
	
	return 0;
}
