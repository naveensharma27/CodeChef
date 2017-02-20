#include<iostream>
#include<algorithm>
using namespace std;
 
int main()
{
	int m;
	int arr[m];
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+m);
	if(m==1)
	{
		cout<<m<<"\n"<<arr[0];
	}
	else if(m==2)
	{
		cout<<m<<"\n"<<arr[0]<<" "<<arr[1];
	}
	else
	{
		cout<<3<<"\n"<<arr[0]<<" "<<arr[1]<<" "<<arr[m-1];
	}
	return 0;
} 
