#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
		long long i,j,n;
		long long r;
		r=0;
		cin>>n;
		vector <long long> arr(n);
		for(j=0;j<n;j++)
		{
			cin>>arr[j];
		}
		sort(arr.begin(),arr.end());
		for(j=0;j<n;j++)
		{
			if(arr[j]*(n-j)>r)
				r=arr[j]*(n-j);
		}
		cout<<r;
  		return 0;
}  
