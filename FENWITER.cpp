#include<bits/stdc++.h>
using namespace std;

int count(string s)
{
	int c=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='1')
			c++;
	}
	return c;
}

string reverse(string s)
{
	for(int i=0;i<(s.length()/2);i++)
	{
		char c = s[i];
		s[i] = s[s.length()-1 - i];
		s[s.length()-1 - i] = c;
	}
	return s;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	int t,n,cnt,x,i;
	string s1,s2,s3;
	bool flag;
	cin>>t;
	while(t--)
	{	
		flag=true;
		
		cin>>s1>>s2>>s3>>n;
		
		cnt = count(s1) + n * count(s2) + count(s3);
		
		s1 = reverse(s1);
		s2 = reverse(s2);
		s3 = reverse(s3);
		
		if(flag)
		{
			i=0;
			x=0;
			while(i<s3.length())
			{
				if(s3[i]=='0')
				{
					flag=false;
					x=i;
					break;
				}
				i++;
			}
			
			if(!flag)
			{
				cout<<cnt + 1 - x<<endl;
			}
		}
		
		
		if(flag)
		{
			i=0;
			x=0;
			while(i<s2.length())
			{
				if(s2[i]=='0')
				{
					flag=false;
					x=i;
					break;
				}
				i++;
			}
			
			if(!flag)
			{
				cout<<cnt + 1 - (x + s3.length())<<endl;
			}
		}
		
		
		if(flag)
		{
			i=0;
			x=0;
			while(i<s1.length())
			{
				if(s1[i]=='0')
				{
					flag=false;
					x=i;
					break;
				}
				i++;
			}
			
			if(!flag)
			{
				cout<<cnt + 1 - (x + n * s2.length() + s3.length())<<endl;
			}
		}
		
		if(flag)
		{
			cout<<1<<endl;
		}			
	}
	return 0;
}
