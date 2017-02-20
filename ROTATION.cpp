#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i=0,n,m,mov=0,d;
	char c;
	cin>>n>>m;
	int arr[n+1];
	for(i=1;i<n;i++)
	{
		cin>>arr[i];
	}
	i=0;
	while(i<m)
	{
		cin>>c;
		cin>>d;
		if(c=='C')
		{
			mov-=d;
		}
		else if(c=='A')
		{
			mov+=d;
		}
		else
		{
		  //cout<<(mov%n+d)%n<<endl;
			cout<<arr[(mov%n+d)%n]<<endl;
		}
		i++;
	}
	
	return 0;
	
}
