#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int Tstones[n+1];
	int Tparent[n+1];
	int a,b,i;
	long long int sum=0;
	cin>>Tstones[0];
	for(i=2;i<=n;i++)
	{
		cin>>Tstones[i];
		sum += Tstones[i]/2;
	}
	for(i=1;i<n;i++)
	{
		cin>>a>>b;
		Tstones[b]=a;
	}
	if(sum % 2 == 1)
		cout<<"Ross"<<endl;
		
	else
		cout<<"Rachel"<<endl;
	return 0;
}

