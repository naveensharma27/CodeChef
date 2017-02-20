#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	std::ios_base::sync_with_stdio(false);
	long long int t,sum1,sum2,i,j,x;
	string s; 
	cin>>t;
	while(t--)
	{
		sum1=0;
		sum2=0;
		cin>>s;
		for(i=0;i<s.length();i++)
		{
			sum1 = sum1 + ((int)s[i] - (int)'0');
		}
		cin>>s;
		for(i=0;i<s.length();i++)
		{
			sum2 = sum2 + ((int)s[i] - (int)'0');
		}
		cout<<(sum1 % 9 * sum2 % 9) % 9<<endl;		
	}
}
