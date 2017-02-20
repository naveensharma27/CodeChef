#include<bits/stdc++.h>
using namespace std;

int gcd(int m, int n)
{
        if(n == 0)
                return m;
        else
                return gcd(n, m % n);
}


int main()
{
	long long int t,n,i,m,x,y,j,g;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long int a[n];
		m=1000000000000000001;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				g=gcd(a[i],a[j]);
				g=(a[i]*a[j])/g;
				m = min(m , g);
			}
		}
		cout<<m<<endl;
	}
}
