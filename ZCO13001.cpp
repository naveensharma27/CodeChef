#include<iostream>
using namespace std;
int arr[1001];
 
 
int main()
{
	long long sum=0;
	int n,i,k;
	cin>>n;
	for(i=0;i<1001;i++)
		arr[i]=0;
	for(i=0;i<n;i++)
	{
		cin>>k;
		arr[k]++;
	}
	for(i=1000;i>1;i--)
	{
		if(arr[i]!=0)
		{
			for(k=i-1;k>0;k--)
			{
				sum+=arr[i]*arr[k]*(i-k);
			}
		}
	}
	cout<<sum;
	return 0;
} 
