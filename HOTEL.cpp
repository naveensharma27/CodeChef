#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int i,j,t,n,tempMax,Max;
	cin>>t;
	while(t--)
	{
		tempMax=0;
		Max=0;
		cin>>n;
		int arr[n],dep[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(i=0;i<n;i++)
		{
			cin>>dep[i];
		}
		sort(arr,arr+n);
		sort(dep,dep+n);
		i=0;
		j=0;
		while(i<n && j<n)
		{
			if(arr[i]<dep[j])
			{
				tempMax++;
				i++;
			}
			else if(arr[i]==dep[j])
			{
				i++;
				j++;
			}
			else
			{
				tempMax--;
				j++;
			}
			
			if(tempMax>Max)
			{
				Max=tempMax;
			}
		}
		if(i<n)
		{
			Max+=n-i;
		}
		cout<<Max<<endl;
	} 
	return 0;
}

