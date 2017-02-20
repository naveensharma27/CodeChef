#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,j,n,m,arr1[501],arr2[501],count=0;
		cin>>n;
		
		for(i=0;i<n;i++)
		{
			cin>>arr1[i];
		}
		
		cin>>m;
		
		for(i=0;i<m;i++)
		{
			cin>>arr2[i];
		}
		sort(arr1,arr1+n);
		sort(arr2,arr2+m);
		/*
		i=0;
		j=0;
		
		while(j<m && i<n)
		{
			if(arr1[i]==arr2[j])
			{
				count++;
				i++;
			}
			else if(arr1[i]>arr2[j])
			{
				j++;
			}
			else
			{
				i++;
			}
		}
		*/
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			if(arr1[i]==arr2[j])
				count++;
		}
		cout<<count<<endl;
	}
	return 0;
}
