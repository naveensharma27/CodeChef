#include<bits/stdc++.h>
using namespace std;
int main()
{
	long t,i;
	cin>>t;
	while(t--)
	{
		cin>>i;
		if(i%2==0)
		cout<<i<<endl;
		else
		cout<<i-1<<endl;
	}
	return 0;
}
