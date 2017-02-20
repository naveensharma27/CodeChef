#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n&(n-1)==0)
			cout<<"No"<<endl;
		else
			cout<<"Yes"<<endl;
	}
	return 0;
}

