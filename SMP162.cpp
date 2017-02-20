#include<bits/stdc++.h>
using namespace std;

int a[1000001];
int main()
{
	long long int n,sum=0,cnt=0,i,ans;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	ans=(sum+2)/2;
	sort(a,a+n);
	for(i=n-1;i>=0;i--)
	{
		if(ans>0)
		{
			ans=ans-a[i];
			cnt++;
		}
		else
		{
			break;
		}
	}
	cout<<cnt<<endl;
	return 0;	
}
