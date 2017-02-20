#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int t,i,j,n;
	int hash[3001];
	int ans[1001];
	//SIEVE AND HASH TOGETHER
	memset(hash,0,sizeof(hash));
	hash[1]=1;
	for(i=2;i<3001;i++)
	{
		if(hash[i]==0)
		{
			for(j=2*i;j<3001;j+=i)
			{
				hash[j]++;
			}
		}
	}
	for(i=1,j=1;j<1001;i++)
	{
		if(hash[i]>=3)
		{
			ans[j++]=i;
		}
	}	
	
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<ans[n]<<endl;
	}
	return 0;
}
