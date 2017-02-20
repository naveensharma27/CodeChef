#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000000001

int main()
{
	long arr[MAX];
	long long int i,t,x,y,id;
	cin>>t;
	while(t--)
	{
		cin>>x>>y;
		for(i=0;i<MAX;i++)	
		{
			arr[i]=0;
		}
		for(i=0;i<x;i++)	
		{
			cin>>id;
			if(arr[id]!=1)
			{
				arr[id]=1;
			}
		}
		for(i=0;i<y;i++)	
		{
			cin>>id;
			if(arr[id]==1)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
				arr[id]=1;
			}
		}
	}
	return 0;
}
