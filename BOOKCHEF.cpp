#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int i,n,m,f,x,p;
	string s;
	cin>>n>>m;
	bool special[1001]={false};
	int fr[100001]={0};
	string post[100001];
	
	for(i=0;i<n;i++)
	{
		cin>>x;
		special[x]=true;
	}
	
	for(i=0;i<m;i++)
	{
		cin>>f>>p>>s;
		fr[p]=f;
		post[p]=s;
	}
	
	for(i=100000;i>0;i--)
	{
		if(special[fr[i]] && fr[i]!=0)
		{
			cout<<post[i]<<endl;
		}
	}
	
	for(i=100000;i>0;i--)
	{
		if(!special[fr[i]] && fr[i]!=0)
		{
			cout<<post[i]<<endl;
		}
	}
	return 0;
}
