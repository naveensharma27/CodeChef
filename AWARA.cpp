#include<iostream>
using namespace std;

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n==1 || n==2)
		{
			cout<<"Manish"<<endl;
		}
		else if(n==3 || n==4)
		{
			cout<<"Deep"<<endl;
		}
		else
		{
			cout<<"Utsav"<<endl;
		}				
	}
	return 0;
}
