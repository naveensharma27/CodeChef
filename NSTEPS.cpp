#include<iostream>
using namespace std;
typedef long long int ll; 
int main()
{
	ll t,x,y;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&x,&y);
		if(y%2==0)
		{
			if(x==y)
				cout<<2*y<<endl;
			else if(x==y+2)
				cout<<2*y+2<<endl;
			else
				cout<<"No Number"<<endl;
		}
		else
		{
			if(x==y)
				cout<<2*y-1<<endl;
			else if(x==y+2)
				cout<<2*y+1<<endl;
			else
				cout<<"No Number"<<endl;
		}
	}
	return 0;
}
