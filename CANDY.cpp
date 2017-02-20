#include<iostream>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,i,sum,c;
	while(true)
	{
		cin>>n;
		if(n==-1)
			break;
		else
		{
			sum=0;
			int a[n];
			for(i=0;i<n;i++)
			{
				cin>>a[i];
				sum+=a[i];
			}
			if(sum%n!=0)
			{
				cout<<-1<<endl;
			}
			else
			{
				c=sum/n;
				sum=0;
				for(i=0;i<n;i++)
				{
					if(a[i]>c)
					{
						sum+=a[i]-c;
					}
				}
				cout<<sum<<endl;
			}
		}
	}
	return 0;
}
