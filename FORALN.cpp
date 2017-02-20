#include<bits/stdc++.h>
using namespace std;
int main()
{
	long i,j,n,count=0;
	string s;
	cin>>n;
	vector <string> arr , arr1;
	for(i=0;i<n;i++)
	{
		cin>>s;
		if(s[s.length()-2]=='k')
		{
			if(s[s.length()-1]=='i')
			{
				s.erase(s.length()-1);
				arr.push_back(s);
			}
			
			else if(s[s.length()-1]=='a')
			{
				s.erase(s.length()-1);
				arr1.push_back(s);
			}
			
		}
		
	}
		sort(arr.begin(),arr.end());
		sort(arr1.begin(),arr1.end());
	
	i=0;
	j=0;
	while(i<arr.size() && j<arr1.size())
	{
		if(arr[i]==arr1[j])
		{
			count++;
			i++;
			j++;
		}
			
		else if(arr[i]>arr1[j])
		{
			j++;
		}
		else
		{
			i++;
		}
	}
	/*
	for(i=0;i<arr.size();i++)
		{
			cout<<" "<<arr[i];
		}
		cout<<endl;
	for(i=0;i<arr1.size();i++)
		{
			cout<<" "<<arr1[i];
		}
	*/
		cout<<count;
	return 0;
}

