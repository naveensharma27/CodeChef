#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,l,b;
	cin>>t;
	while(t--)
	{
		cin>>n>>l>>b;
		if(b>l)
		{
			l=b+l;
			b=l-b;
			l=l-b;
		}
		while(n>0 && l*b>0)
		{
			l=l-b;
			if(b>l)
			{
				l=b+l;
				b=l-b;
				l=l-b;
			}
			n--;
		}
		if(l*b>0)
		{
			cout<<"Yes "<<l*b<<endl;	
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
	return 0;
}
