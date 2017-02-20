#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,d,i,val;
	long long int avg=0;
	cin>>n>>k>>d;
	for(i=0;i<n;i++)
	{
		cin>>val;
		avg+=abs(val);
	}
	cout<<avg/n<<" "<<0<<endl;
	cout<<-1<<endl;
	return 0;
	
}
