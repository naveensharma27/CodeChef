#include<bits/stdc++.h>
using namespace std;

int count(int type[])
{
	int c=0;
	for(int i=1;i<7;i++)
	{
		if(type[i]!=0)
		{
			c++;
		}
	}
	return c;
}

void score(int type[])
{
	if(count(type)==6)
	{
		//cout<<count(type)<<endl;
		sort(type+1,type+7);
		//cout<<type[1]<<endl;
		type[0]+=4*type[1];
		type[2]=type[2]-type[1];
		type[3]=type[3]-type[1];
		type[4]=type[4]-type[1];
		type[5]=type[5]-type[1];
		type[6]=type[6]-type[1];
		type[1]=0;
		score(type);
	}
	else if(count(type)==5)
	{
		//cout<<count(type)<<endl;
		sort(type+1,type+7);
		//cout<<type[2]<<endl;
		type[0]+=2*type[2];
		type[3]=type[3]-type[2];
		type[4]=type[4]-type[2];
		type[5]=type[5]-type[2];
		type[6]=type[6]-type[2];
		type[1]=0;
		type[2]=0;
		score(type);
	}
	else if(count(type)==4)
	{
		//cout<<count(type)<<endl;
		sort(type+1,type+7);
		type[0]+=type[3];
		//cout<<type[3]<<endl;
		type[4]=type[4]-type[3];
		type[5]=type[5]-type[3];
		type[6]=type[6]-type[3];
		type[1]=0;
		type[2]=0;
		type[3]=0;
		score(type);
	}
	return;
	
}

	

int main()
{
	int t,n,i,j,x,max,maxT,maxI;
	cin>>t;
	while(t--)
	{
		max=0;
		maxI=0;
		maxT=0;
		cin>>n;
		int players[n+1];
		int type[7];
		for(i=1;i<=n;i++)
		{
			cin>>type[0];
			type[1]=type[2]=type[3]=type[4]=type[5]=type[6]=0;
			for(j=0;j<type[0];j++)
			{
				cin>>x;
				type[x]++;
			}
			score(type);
			players[i]=type[0];
			//cout<<players[i]<<endl;			
		}
		for(int i=1;i<=n;i++)
		{
			if(players[i]>max)
			{
				max=players[i];
				maxI=i;
				maxT=1;
			}
			else if(players[i]==max)
			{
				maxT++;
			}
		}
		if(maxT>1)
		{
			cout<<"tie"<<endl;
		}
		else if(maxI==1)
		{
			cout<<"chef"<<endl;
		}
		else
		{
			cout<<maxI<<endl;
		}
				
	}
	return 0;
}
