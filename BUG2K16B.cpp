#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,j;
		cin>>n;
		int a[105]={0};
		for(int i=0;i<n;i++)
        {
            cin>>j;
            a[j]++;
        }
        for(int i=1;i<105;i++)
        {
            if(a[i]>0)
                cout<<i<<": "<<a[i]<<endl;
        }
	}
	return 0;
}
