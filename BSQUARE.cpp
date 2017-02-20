#include<iostream>
using namespace std;

int main()
{
	long long int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		n++;
		if(n%4==0)
			cout<<--n<<endl;
		else if(n%2==0)
			cout<<--n*2<<endl;
		else
			cout<<--n*4<<endl;
	}
}
