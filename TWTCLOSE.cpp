/*

**LET'S CODE**

**Problem : Closing the Tweets
**Language : C++
**Handle Name : @itsnaveen01
**Problem code : TWTCLOSE
**Judge : CodeChef

*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007;


int main()
{
	std::ios_base::sync_with_stdio(false);
	ll n,k,t,max=0;
	string s;
	cin>>n>>k;
	ll hash[n+1];
	memset(hash,0,sizeof(hash));
	while(k--)
	{
		cin>>s;
		if(s=="CLOSEALL")
		{
			memset(hash,0,sizeof(hash));
			max=0;
		}
		else
		{
			cin>>t;
			max=max+1-(2*hash[t]);
			hash[t]=1-hash[t];			
		}
		
		cout<<max<<endl;
	}
	return 0;
}
