#include<bits/stdc++.h>
using namespace std;
int main()
{
	int j,t,n,count,i;
	cin>>t;
	while(t--)
	{
		count=0;
		cin>>n;
		int Pwt[n];
		int Rwt[n];
		for(i=0;i<n;i++)
		{
			cin>>Pwt[i];
		}
		for(i=0;i<n;i++)
		{
			cin>>Rwt[i];
		}
		sort(Rwt,Rwt+n);
		sort(Pwt,Pwt+n);
		i=0;
		j=0;
		while(i<n)
		{
			if(Pwt[j]<=Rwt[i])
			{
				count++;
				i++;
				j++;
			}
			else
			{
				i++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
