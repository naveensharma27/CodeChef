#include<iostream>
using namespace std;
int main()
{
	int t,n,x,c,m,i;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		x=1;
		c=1;
		m=1;
		cin>>n;
		while(x<n)
		{
			m=m+9;
			x=x+m;
			c++;
		}
		cout<<"Case #"<<i<<": "<<c<<endl;
	}
	return 0;
}
