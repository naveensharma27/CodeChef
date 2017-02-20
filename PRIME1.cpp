#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
typedef long long int ll;
ll t,m,n,i,j,pc=0;
int prime[4000];

void init()
{
	prime[pc++]=2;
	for(i=3;i<=ceil(sqrt(1000000000));i+=2)
	{
		bool flag=true;
		for(ll j=3;j<=ceil(sqrt(i));j+=2)
		{
			if(i%j==0)
			{
				flag=false;
				break;
			}
		}
		if(flag)
			prime[pc++]=i;		
	}	
}

bool isprime(ll x)
{
	if(x==1)
		return false;
	else if(x==2)
		return true;
	for(ll i=0;i<pc;i++)
	{
		if(i>sqrt(x))
			break;
		if(x%prime[i]==0)
		{
			if(x==prime[i])
				return true;
			else
				return false;
		}
	}
	return true;
}
int main()
{
	init();
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld",&m,&n);
		if(m==n)
		{
			if(isprime(m))
				printf("%lld\n",m);
		}	
		else
		{
			if(m<2)
				m=2;
			if(m%2==0 && m!=2)
				m++;
			else if(m==2)
			{
				printf("%lld\n",m);
				m++;
			}
			for(i=m;i<=n;i+=2)
			{
				if(isprime(i))
					printf("%lld\n",i);
			}
			
		}		
		printf("\n");
	}
	return 0;
}
