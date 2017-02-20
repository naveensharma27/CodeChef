#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
#define MOD 1000000
 
using namespace std;
int arr[1000005];
int main()
{
	long long int absDiff;
	long long int i,t,a,b,c,d,N,counter;
	cin>>t;
	while(t--)
	{
		absDiff=0;
		memset(arr, 0, sizeof(arr));
		cin>>N>>a>>b>>c>>d;
		arr[d]++;
		for(i=1;i<N;i++)
		{
			d=(a * d * d + b * d + c)%MOD;
			arr[d]++;
		}
		counter=0;
		for(i=0;i<=MOD;i++)
		{
			if(counter%2==0)
			{
				if(arr[i]%2!=0)
					absDiff=absDiff+i;
			}
			else
			{
				if(arr[i]%2!=0)
					absDiff=absDiff-i;
			}
			
			counter=counter+arr[i];
		}
		if(absDiff<0)
			absDiff=-1*absDiff;
		cout<<absDiff<<endl;
	}
	return 0;
} 
