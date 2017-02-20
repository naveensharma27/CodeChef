#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,i,j;
	bool sieve[100001];
	memset(sieve , true , sizeof(sieve));
	sieve[0]=sieve[1]=false;

	for(i=3;i<100001;i+=2)
	{
		for(j=2;j*i<100001;j+=2)
		{
			sieve[i*j]=false;
		}
	}
	for(i=0;i<=1000001;i++)
	{
		if(sieve[i])
			cout<<i<<endl;
	}	
	return 0;
}
