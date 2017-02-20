#include<iostream>
using namespace std;
char g[55][55];
int t,i,j,L,R,T,B,m,n,cpc;
int getL()
{
	int y;
	y=j-1;
	L=0;
	while(y>=0)
	{
		if(g[i][y]=='^')
		{
			L++;
			y--;
		}
		else
		{
			break;
		}
		
	}
	return L;
}


int getR()
{
	int y;
	y=j+1;
	R=0;
	while(y<n)
	{
		if(g[i][y]=='^')
		{
			R++;
			y++;
		}
		else
		{
			break;
		}
		
	}
	return R;
}


int getT()
{
	int x;
	x=i-1;
	T=0;
	while(x>=0)
	{
		if(g[x][j]=='^')
		{
			T++;
			x--;
		}
		else
		{
			break;
		}
		
	}
	return T;
}

int getB()
{
	int x;
	x=i+1;
	B=0;
	while(x<m)
	{
		if(g[x][j]=='^')
		{
			B++;
			x++;
		}
		else
		{
			break;
		}
		
	}
	return B;
}

int main()
{
	cin>>t;
	while(t--)
	{
		cpc=0;
		cin>>m>>n;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>g[i][j];
			}
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(min(min(getR(),getL()),min(getT(),getB()))>=2 && g[i][j]!='#')
				{
					cpc++;
				}
			}
		}
		cout<<cpc<<endl;
		
	}
	return 0;
}
