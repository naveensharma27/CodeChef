#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int i,n,count=0,len=0;
		cin>>n;
		long long arr[n];
		for(i=0;i<n;i++)
			cin>>arr[i];
		for(i=1;i<n;i++)
		{
			if(arr[i-1]<=arr[i])
			{
				len++;				
				count+=len;
				
			}
			else
			{
				len=0;
			}
		}
		cout<<count+n<<endl;			
	}
	return 0;
}
