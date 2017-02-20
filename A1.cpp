#include<iostream>
using namespace std;

bool payup(int arr[] , int j , int m)
{
	if(m==0)
		return true;
	if(j==0 && m!=0)
		return false;
	return payup(arr , j-1 , m)	|| payup(arr , j-1 , m-arr[j-1]);
		
}

int main()
{
	int t,n,m,i,j,k;
	int arr[20];
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		j=0;
		for(i=0;i<n;i++)
		{
			cin>>k;
			if(k<=m)
			arr[j++]=k;
		}
		if(payup(arr , j , m))
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}
