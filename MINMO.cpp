#include<iostream>
using namespace std;

int main()
{
	int N,B,i,j,Tmoves,T1,T2,moves=0;
	cin>>N>>B;
	int x[B];
	int y[B];
	int cx[4];
	int cy[4];
	
	cx[1]=cy[2]=cx[0]=cy[0]=1;
	cy[1]=cx[2]=cx[3]=cy[3]=N;
		
	for(i=0;i<B;i++)
		cin>>x[i];
	for(i=0;i<B;i++)
		cin>>y[i];
		
	for(i=0;i<B;i++)
	{
		Tmoves=1000000;
		for(j=0;j<4;j++)
		{
			T1=x[i]>cx[j]?x[i]-cx[j]:cx[j]-x[i];
			T2=y[i]>cy[j]?y[i]-cy[j]:cy[j]-y[i];
			if((T1+T2)<Tmoves)
			{
				Tmoves=T1+T2;
			}
		}
		moves+=Tmoves;
	}
	cout<<moves<<endl;
}
