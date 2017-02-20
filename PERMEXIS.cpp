#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t,i,n;
	bool flag ;
	cin>>t;
	while(t--)
	{
		cin>>n;
		flag=true;
		int arr[n];
		
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr , arr+n );
		
		for(i=0;i<n-1;i++)
		{
			if(arr[i+1]-arr[i]>1)
			{
				flag=false;
			}
		}
		if(flag)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		
	}
	return 0;
}
