/*

**LET'S CODE**

**Problem : Closing the Tweets
**Language : C++
**Handle Name : @itsnaveen01
**Problem code : TWTCLOSE
**Judge : CodeChef
**Concept : Combinations of selecting n objects with k different types
					n+k-1
						  C
						  	k-1

*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007;


int main()
{
	std::ios_base::sync_with_stdio(false);
	ll n,k,t,max,a,b;
	cin>>t;
	while(t--)
	{
		max=1;
		cin>>n>>k;
		n--;
		k--;
		if(k>n/2)
			k=n-k;
		for(ll i=1;i<=k;i++)
		{
			max=max*(n+1-i)/i;
		}
		cout<<max<<endl;
	}
	return 0;
}
