//INCOMPLETE
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,x=0,s,i;
		bool flag = false;
		cin>>n>>s;
		int a[n];
		for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
        	if(x==s)
        	{
        		flag=true;
        		break;
        	}
        	else if(x<s)
        	{
        		x+=a[i];
        	}
        	else
        	{
        		break;
        	}
        }
        if(flag)
        	cout<<"YES!"<<endl;
        else
        	cout<<"NO!"<<endl;
	}
	return 0;
}
