#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int t,n,i,j,x,y;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int mat[n][n];
 
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				mat[i][j]=0;
			}
		}	
		
		i=n/2;
		for(j=0;j<n;j++)
		{
			mat[i%n][j]=1;
			y=j;
			for(x=2;x<=n;x++)
			{
				y++;
				mat[i%n][y%n]=x;
			}
			i++;
		}	
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cout<<mat[i][j]<<" ";
			}
			cout<<endl;
		}
	}
} 
