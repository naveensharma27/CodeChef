#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,x,y,steps;
	cin>>t;
	while(t--)
	{
		cin>>x>>y;
		if(x<0)
		{
			x=x*(-1);
		}
		if(y<0)
		{
			y=y*(-1);
		}
		if(x>=y)
		{
			if((x-y)%2==0)
			steps=2 * y + 2 * ( x - y );
			else
			steps=2 * y + 2 * ( x - y ) + 1;
		}
		else
		{
			if((y-x)%2==0)
			steps=2 * x + 2 * ( y - x );
			else
			steps=2 * x + 2 * ( y - x ) - 1;
		}
		cout<<steps<<endl;	
	}		
	return 0;
}
