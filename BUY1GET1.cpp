#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,t,ascii,cost;
	int hash[200];
	string s;
	cin>>t;
	while(t--)
	{
		cost=0;
		cin>>s;
		for(i=0;i<200;i++)
			hash[i]=0;
		for(i=0;i<s.length();i++)
		{
			ascii=(int)s[i];
			hash[ascii]++;
		}
		for(i=0;i<200;i++)
			cost+=(hash[i]+1)/2;
		cout<<cost<<endl;
		
	}
   	return 0;
}
