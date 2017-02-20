#include<iostream>
using namespace std;
int main()
{
	long long int n,i,ans;	
	while(true)
	{
		cin>>n;
		ans=0;
		if(n==0)
			break;
		for(i=0;i<n;i++)
		{
			ans=ans+(n-i)*(n-i);
		}
		cout<<ans<<endl;
	}
	return 0;
}
