#include<bits/stdc++.h>
using namespace std;
#define ull long long int
long mod=1000000007;
long long fact(ull n)
 {
           if(n==1 || n==0) return 1;
           return ((n%mod)*(fact(n-1)%mod)%mod);
 }
int main()
{
	int t,i,count;
	int alphabet[26];
	long long ans;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>s;
		for(i=0;i<26;i++)
			alphabet[i]=0;
		
		count=0;
		
		for(i=0;i<s.length();i++)
		{
			alphabet[(int)s[i]-97]++;
		}
		
		for(i=0;i<26;i++)
		{
			if(alphabet[i]!=0)
				count++;
		}
			
		
		ans=fact(count);
		
		for(i=0;i<26;i++)
			ans*=fact(alphabet[i]);
		
		cout<<ans%mod<<endl;
	}
	return 0;
}
