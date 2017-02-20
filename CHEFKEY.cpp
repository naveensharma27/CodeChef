#include<iostream>
using namespace std;

int main()
{
	int t,n,m,c,count,i;
	cin>>t;
	while(t--)
	{
		count=0;
		cin>>n>>m>>c;
			for(i=1;i<=m;i++)
			{
				if(c%i==0 && c/i<=n)
				{
					count++;
				}
			}
			cout<<count<<endl;
	}
	return 0;
}
