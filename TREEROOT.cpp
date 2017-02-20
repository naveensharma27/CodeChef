#include<iostream>
using namespace std;

int main()
{
	int t,i,n,a,b,id,sid;
	cin>>t;
	while(t--)
	{
		cin>>n>>id>>sid;
		for(i=1;i<n;i++)
		{
			cin>>a>>b;
			id+=a;
			sid+=b;
		}
		cout<<id-sid<<endl;
	}
	return 0;
}
