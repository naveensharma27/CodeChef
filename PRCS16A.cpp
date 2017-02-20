#include<bits/stdc++.h>
using namespace std;
int main()
{
	int w,a[3];
	cin>>a[0]>>a[1]>>a[2]>>w;
	sort(a,a+3);
	if(a[2]+a[1]>=w)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
