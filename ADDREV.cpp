#include<bits/stdc++.h>
using namespace std;
 
int Reverse(int x)
{
	int temp=0;
	while(x>0)
	{
		temp=temp*10+x%10;
		x=x/10;
	}
	return temp;
}
 
 
int main()
{
	int t,n,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		while(n%10==0 || m%10==0)
		{
			if(n%10==0)
				n=n/10;
			if(m%10==0)
				m=m/10;	
		}
		cout<<Reverse(Reverse(n)+Reverse(m))<<endl;
	}
	return 0;
} 
