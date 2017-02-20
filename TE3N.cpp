#include<iostream>
using namespace std;

int main()
{
	int t,ci,ce,cm,i;
	string s;
	bool flag;
	cin>>t;
	while(t--)
	{
		flag=true;
		ce=0;
		ci=0;
		cm=0;
		cin>>s;	
		
		for(i=0;i<s.length();i++)
		{
			if(s[i]=='I')
			{
				ci++;
			}
			if(s[i]=='E')
			{
				ce++;
			}
			if(s[i]=='M')
			{
				cm++;
			}
			if(ce>ci || cm >ci || cm>ce)
			{
				flag=false;
				break;
			}			
		}
		if(ce!=ci || ci!=cm || cm!=ce)
			flag=false;
		
		if(flag)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;		
	}
	return 0;
}
