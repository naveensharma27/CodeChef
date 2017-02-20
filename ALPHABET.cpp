#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,i,j,count;
	bool flag;
	string s,s1;
	cin>>s;
	cin>>t;
	sort(s.begin(),s.end());
	while(t--)
	{
		count=0;
		cin>>s1;
		sort(s1.begin(),s1.end());
		i=0;
		j=0;
		while(i<s.length() && j<s1.length())
		{
			if(s[i]<s1[j])
			{
				i++;
			}
			else if(s[i]==s1[j])
			{
				j++;
				count++;
			}
			else
			{
				break;
			}
			
		}
		if(count==s1.length())
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
	}
}
