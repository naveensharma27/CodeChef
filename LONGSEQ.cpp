#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,z,o;
	char a='0';
	string s;
	cin>>t;
	while(t--)
	{
		z=0;
		o=0;
		cin>>s;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]==a)
			{
				z++;
			}
			else
			{
				o++;
			}
		}
		if(z==1 || o==1)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
	return 0;
}
