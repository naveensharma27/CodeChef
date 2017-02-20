#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int x[n] , y[n];
	unsigned long long int max=0,dist;
	for(int i=0;i<n;i++)
	{
		cin>>x[i]>>y[i];
		for(int j=i-1;j<i && j>=0;j--)
		{
			dist = (x[j]-x[i])*(x[j]-x[i]) + (y[j]-y[i])*(y[j]-y[i]);
			if(dist>max)
			{
				max=dist;
			}
			
		}
		cout<<max<<endl;
	}
	return 0;
}
