#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,n,t,count;
	string s;
	char c;
	cin>>t;
	while(t--)
	{
		count=0;
		map <string , char> m;
		map <string , char> :: iterator it;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>s>>c;
			it=m.find(s);
			if(it==m.end())
			{
				m.insert(pair <string , char> (s,c));
			}
			else
			{
				it->second=c;
			}
		}
		for(it=m.begin();it!=m.end();++it)
		{
			if(it->second=='+')
				count++;
			else
				count--;
		}
		cout<<count<<endl;
	}
	return 0;
}
