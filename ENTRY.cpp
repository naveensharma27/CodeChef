#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	std::ios_base::sync_with_stdio(false);
	int i,j,n,q,t,l,r,count;
	cin>>n>>q;
	int lock[n+1];
	memset(lock , 0 , sizeof(lock));
	for(i=0;i<q;i++)
	{
		cin>>t>>l>>r;
		if(t==1)
		{
			for(j=l;j<=r;j++)
			{
				lock[j]=(lock[j]+1)%10;
			}
		}
		else if(t==2)
		{
			count=0;
			for(j=l;j<=r;j++)
			{
				count+=lock[j];
			}
			cout<<count<<endl;
		}
	}
	return 0;
}
