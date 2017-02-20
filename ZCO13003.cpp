#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
	int n,i,j,h,k;
	long long R=0;
	cin>>n>>h;
	vector <int> arr;	
	for(i=0;i<n;i++)
	{
		cin>>k;
		if(k<h)
		arr.push_back(k);
				
	}
	sort(arr.begin(),arr.end());
	k=arr.size()-1;
	i=0;
	while(i<k)
	{
		if(arr[i]+arr[k]<h)
		{
			R+=k-i;
			i++;
		}	
		else
			k--;
			
	}
	cout<<R;
	return 0;
}  
