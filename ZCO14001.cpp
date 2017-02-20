#include <iostream>
using namespace std;
int main () {
		int i,n,h,pos_hook,qty_hook;
		cin>>n>>h;
		int arr[n];
  		for(i=0;i<n;i++)
  		{
  			cin>>arr[i];
  		}
  		cin>>i;
  		pos_hook=0;
  		qty_hook=0;
  		do
		{
			if(i==1 && pos_hook!=0)
			{
				pos_hook--;
			}
			else if(i==2 && pos_hook!=n-1)
			{
				pos_hook++;
			}
			else if(i==3 && qty_hook==0)
			{
				if(arr[pos_hook]>0)
				{
					arr[pos_hook]--;
					qty_hook++;
				}
				
			}
			else if(i==4 && qty_hook==1)
			{
				if(arr[pos_hook]<h)
				{
					arr[pos_hook]++;
					qty_hook--;
				}
			}
  			cin>>i;
  		}while(i!=0);
  		for(i=0;i<n;i++)
  		{
  			cout<<arr[i]<<" ";
  		}
		return 0;
}   
