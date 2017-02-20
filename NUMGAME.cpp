#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	long N;
	cin>>t;
	while(t--)
	{
		cin>>N;
		if(N%2==0)
			cout<<"ALICE"<<endl;
		else
			cout<<"BOB"<<endl;	
	}
	return 0;
}
