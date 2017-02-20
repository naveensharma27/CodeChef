#include<bits/stdc++.h>
using namespace std;

int main()
{
	long t,n,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long arr[n];
		for(i=0;i<n;i++)
			cin>>arr[i];
			
		sort(arr,arr+n);
			cout<<arr[0];
			i=1;
			while(i<n-1)
			{
				cout<<" "<<arr[i+1]<<" "<<arr[i];
				i+=2;
			}
		if(n%2==0)
			cout<<" "<<arr[n-1]<<endl;
		else
			cout<<endl;
		
	}
	return 0;
}
