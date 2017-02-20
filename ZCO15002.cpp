#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
	int n,k;
	long R=0;
	cin>>n>>k;
	vector <int> arr(n);
	for(int i=0;i<arr.size();i++)
		cin>>arr[i];
	sort(arr.begin(),arr.end());
	for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(arr[j]-arr[i]>=k)
				{
					R+=n-j;
					break;
				}		
			}
		}
		cout<<R;
	return 0;
}  
