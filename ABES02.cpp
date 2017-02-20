#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t,i,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		for(i=0;i<n/2;i++)
			cout<<a[i]<<" "<<a[n-1-i]<<" ";
		if(n%2==1)
			cout<<a[n/2];
		cout<<endl;
	}
	return 0;
}
