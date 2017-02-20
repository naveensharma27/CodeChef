#include<iostream>
#include<cstring>
#include<cmath>
#include<stdio.h>
using namespace std;
bool prime[1000001];
int phi[1000001];
void SEulerTF()
{
	phi[1]=0;
	prime[1]=true;
	for(int i=2;i<=1000000;i++)
	{
		if (prime[i]) 
			continue;
        phi[i]=i-1;
        for (int j=2*i;j<=1000000;j+=i)
		{
            if (!prime[j]) 
			{
				prime[j] = true; 
				phi [j] = j;
			}
				phi [j] -= phi [j] / i;
        }
	}
}
int main()
{
	int t,m,n,i,j;
	SEulerTF();
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf ("%d %d", &m, &n);
        if (phi[n] >= phi[m]) 
		printf("Case %d: Swapnil lost it\n",i);
        else 
		printf("Case %d: Shibli took it\n",i);
	}
	return 0;
}

/*
#include <bits/stdc++.h>
using namespace std; 
int phi(int n)
{    
    int result = n;
    for (int p=2; p*p<=n; ++p)
    {
        if (n % p == 0)
        {
            while (n % p == 0)
                n /= p;
            result -= result / p;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}
 
int main() {
    int k=1;
    int t;
scanf("%d",&t);
while(t--)
{
     int a,b;
    scanf("%d%d",&a,&b);
    int c=phi(a);
 int d=phi(b); 
if(d>=c)
printf("Case %d: Swapnil lost it\n",k);
else
printf("Case %d: Shibli took it\n",k);
k++;
}
	return 0;
}
*/
