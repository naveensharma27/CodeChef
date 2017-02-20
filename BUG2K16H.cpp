#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,i,j;
	cin>>t;
	int arr[26];
	int asc=(int)'a';
	string s;
	for(i=1;i<=t;i++)
	{
		cin>>s;
		for(j=0;j<26;j++)
		{
			arr[j]=0;
		}
		for(j=0;j<s.length();j++)
		{
			int x=(int)s[j];
			arr[x-asc]++;
		}
		for(j=0;j<26;j++)
		{
			if(arr[j]!=0)
			{
				char c=asc+j;
				if(arr[j]==1)
				cout<<c;
				else
				cout<<c<<arr[j];
			}
		}
		cout<<endl;
	}
	return 0;
}
