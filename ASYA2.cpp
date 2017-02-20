#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

bool mat1[10005][26];
bool mat2[10005][26];

int isBeautiful(int x , int y)
{
	for(int i=0;i<26;i++)
	{
		if(!mat1[x][i] && !mat2[y][i])
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	long long int count=0,i,j,n1,n2;
	string s;
	cin>>n1>>n2;
	
	for(i=1;i<=n1;i++)
	{
		cin>>s;
		for(j=0;j<s.length();j++)
		{
			mat1[i][s[j] - 'A']=true;
		}
	}
	for(i=1;i<=n2;i++)
	{
		cin>>s;
		for(j=0;j<s.length();j++)
		{
			mat2[i][s[j] - 'A']=true;
		}
	}
	for(i=1;i<=n1;i++)
	{
		for(j=1;j<=n2;j++)
		{
			count += isBeautiful(i , j);
		}
	}
	cout<<count<<endl;
	return 0;
}
