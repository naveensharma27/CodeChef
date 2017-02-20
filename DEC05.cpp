#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i;
	long N,x;
	cin>>t;
	while(t--)
	{
		cin>>N;
		i=0;
		x=2;
		while(x<=N)
		{
			x=pow(2,i);
			i++;
		}
		cout<<x/2<<endl;
	}
	return 0;
}
