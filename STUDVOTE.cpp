#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	long n,k,i,x,count; 
	cin>>t;
	while(t--)
	{
		count=0;
		cin>>n>>k;
		int tV[n+1];
		bool Self[n+1];
		for(i=1;i<n+1;i++)
		{
			tV[i]=0;
			Self[i]=true;
		}
		for(i=1;i<n+1;i++)
		{
			cin>>x;
			if(x!=i)
			{
				//cout<<"if"<<i<<" "<<x<<endl;
				tV[x]++;
			}
			else
			{
				//cout<<"else"<<i<<" "<<x<<endl;
				Self[i]=false;
			}
				
		}
		for(i=1;i<n+1;i++)
		{
			if(tV[i]>=k && Self[i])
				count++;
		}
		cout<<count<<endl;
	}
	return 0;
} 
