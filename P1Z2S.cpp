#include<bits/stdc++.h>
using namespace std;

int main()
{
	long i,n,sum=0;
	cin>>n;
	long arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	if(sum<=2*n)
	{
		cout<<n<<endl;
	}
	else
	{
		n+=((sum-2*n)+1)/2;
		cout<<n<<endl;
	}
	return 0;
}
