#include<iostream>
using namespace std;
int main()
{
	long long int t,n,count;
	cin>>t;
	for(long i=0;i<t;i++)
	{
		cin>>n;
		count=0;
		for(long j=5;j<=n;j*=5)
		{
			count +=n/j;
		}
		cout<<count<<endl;
	}
	return 0;
}
