#include<bits/stdc++.h>
using namespace std;

int main()
{
	int  i,t,n,x,ans;
	cin>>t;
	while(t--)
	{
		vector <int> arr;
		cin>>n;
		for(i=1;i<=n;i++)
		{
			cin>>x;			
			if(x%2==1)
			{
				arr.push_back(i);
			}
		}
		if(arr.size()%2==0)
		{
			ans=n;
		}
		else
		{
			if(arr[0]>n-arr[arr.size()-1])
			{
				ans=arr[arr.size()-1]-1;
			}
			else
			{
				ans=n-arr[0];
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
