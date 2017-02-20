#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int t,i,l;
	bool flag;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>s;
		flag=true;
		l=s.length()-1;
		for(i=0;i<s.length()+1/2;i++)
		{
			if(s[i]!=s[l-i] && s[i]!='.' && s[l-i]!='.')
			{
				flag=false;
				break;
			}
			else if(s[i]=='.' || s[l-i]=='.')
			{
				
				if(s[i]=='.'&& s[l-i]=='.')
				{
					s[i]=s[l-i]='a';
				}
				else if(s[i]=='.')
				{
					s[i]=s[l-i];
				}
				else
				{
					s[l-i]=s[i];
				}
			}
		}
		if(flag)
		{
			cout<<s<<endl;
		}
		else
		{
			cout<<-1<<endl;
		}
	}
	return 0;
}
