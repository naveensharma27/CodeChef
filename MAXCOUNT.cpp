#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,N,count,i,j;
	int arr[10001];
	cin>>t;
	while(t--)
	{
		count=0;
		cin>>j;
		for(i=0;i<10001;i++)
			arr[i]=0;
		for(i=0;i<j;i++)
		{
			cin>>n;
			arr[n]++;
		}
		for(i=1;i<10001;i++)
		{
			if(arr[i]>count)
			{
				count=arr[i];
				N=i;
			}
		}
		cout<<N<<" "<<count<<endl;
	}
	return 0;
}
