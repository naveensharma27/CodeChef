#include<iostream>
using namespace std;

int main()
{
	string s1,s2,ts1,ts2;
	cin>>s1>>s2;
	
	ts1 = s1;
	ts2 = s2;
	
	for(int i = 0 ; i < ts2.length() ; i++)
	{
		if(ts1[i] >= ts2[i])
		{
			ts1[i] = int'0' + int(ts1[i]) - int(ts2[i]);
		}
		else
		{
			
		}
	}
	return 0;
}
