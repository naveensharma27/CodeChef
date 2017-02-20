#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	long long int n,x,a,st,unSt,tot=0;
	cin>>n>>x;
	long long int stScore=0;
	long long int unStScore=0;
	st=1;
	unSt=2;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		if(a==-1)
		{
			cout<<stScore<<" "<<tot<<endl;
			stScore=0;
			st=max(st , unSt);
			st++;
			if(i%x==0)
			{
				swap(st,unSt);
				swap(stScore , unStScore);
			}
				
		}
		else
		{
			tot+=a;
			if(a%2==1)
			{
				stScore+=a;
				if(i%x!=0)
				{
					swap(st,unSt);
					swap(stScore , unStScore);					
				}
			}
			else
			{
				stScore+=a;
				if(i%x==0)
				{
					swap(st,unSt);
					swap(stScore , unStScore);
				}				
			}
		}
	}
	cout<<tot<<endl;
	return 0;
}

