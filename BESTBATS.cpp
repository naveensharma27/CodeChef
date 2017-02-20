#include<bits/stdc++.h>
using namespace std;
long f(int n)
{
	long p=1;
	if(n==0)
		return p;
	else
	for(;n>0;n--)
		p*=n;
	return p;
}

int main()
{
	int arr[101];
	int arr1[11];
	int i,t,k,n,r;
	cin>>t;
	while(t--)
	{
		r=0;
		for(i=0;i<101;i++)
			arr[i]=0;
			
		for(i=0;i<11;i++)
		{ 
			cin>>arr1[i];
		  	arr[arr1[i]]++; 
		}
		
		sort(arr1,arr1+11);
		cin>>k;
		n=arr[arr1[11-k]];
		
		for(i=11-k;i<11;i++)
			if(arr1[i]==arr1[11-k])
				r++;
		cout<<f(n)/(f(n-r)*f(r))<<endl;
	}
	return 0;
}
