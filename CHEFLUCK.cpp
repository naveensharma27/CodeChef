#include<bits/stdc++.h>
using namespace std;
int main()
{
	long t,n,i;
	bool flag;
	cin>>t;
	while(t--)
	{
			flag=false;
			cin>>n;
			i=0;
			while(i<=n)
			{
				if(i%4==0 && (n-i)%7==0)
				{
					cout<<n-i<<endl;
					flag=true;
					break;
				}
				i+=4;
			}
			if(!flag)
			cout<<-1<<endl;
	}
	return 0;
}
