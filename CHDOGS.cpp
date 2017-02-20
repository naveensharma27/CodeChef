#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,t;
	cin>>t;
	while(t--)
	{
		double s,v;
		cin>>s>>v;
		double res = (2 * s) / (3 * v);
		printf("%.6f \n" ,res);
	}
	return 0;
}
