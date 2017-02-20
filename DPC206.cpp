#include<bits/stdc++.h>
using namespace std;

long long int Reverse(long long int x)
{
	long long int temp=0;
	while(x>0)
	{
		temp=temp*10+x%10;
		x=x/10;
	}
	return temp;
}


int main()
{
	long long int t,i,n,m;
	cin>>t;
	while(t--)
	{
		i=0;
		cin>>n;
		while(true)
		{
			m=n+Reverse(n);
			//cout<<m<<endl;
			i++;
			if(m==Reverse(m))
			{
				cout<<i<<" "<<m<<endl;
				break;
			}
			else
			{
				n=m;
			}
		}
	}
	return 0;
}
