#include<bits/stdc++.h>
using namespace std;
int main()
{
	bool flag=true;
	long i,X,N,tempN,p;
	cin>>X;
	tempN=X;
	if(X%2==0 && X>2)
		tempN++;
	while(true)
	{
		N=0;
		p=tempN;
		flag=true;
		while(p!=0)
		{
			N=N*10 + p%10;
			p=p/10;
		}
		if(N==tempN)
		{
			i=3;
			while(i<=sqrt(tempN))
			{
				if(tempN%i==0)
				{
					flag=false;				
					break;
				}
				i+=2;
			}
			if(flag)
			{
				cout<<tempN<<endl;
				return 0;
			}
			
		}
		tempN+=2;
	}
}
