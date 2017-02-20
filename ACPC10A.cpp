#include<iostream>
using namespace std;
typedef long long int ll;
int main()
{
	ll a1,a2,a3;
	string s;
	while(true)
	{
		cin>>a1>>a2>>a3;
		if(a1==0&&a2==0&&a3==0)
			break;
		else if(a2-a1==a3-a2)
		{
			s="AP";
			a3 = a3 + a3-a2;
			cout<<s<<" "<<a3<<endl;
		}
		else
		{
			s="GP";
			a3=a3*(a2/a1);
			cout<<s<<" "<<a3<<endl;
		}
	}
	return 0;
}
