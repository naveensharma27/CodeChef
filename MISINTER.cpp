#include <iostream>
using namespace std;
#define mod 1000000007
int arr1[100005],arr2[100005];
int main()
{
	arr1[0] = arr2[0] = 0;
    long long ans, t,n,p,i,j,k;
	cin>>t;
    while (t--)
    {
        cin>>n;
        if (n<=2)
        {
            cout<<26<<endl;
        }
        else
        {
        	if (n%2==1)
        	{
        	    ans = 26;
        	    n--;
        	}
        	
        	else
           		ans = 1;
           		
           	for (i=1; i<=n/2; i++)
        	{
        	    arr1[i] = i;
       		    arr1[n/2+i] = n/2+i;
            	arr2[i] = 2*i;
            	arr2[n/2+i] = arr2[i]-1;
        	}
				
        	for(k=1;k<=n;k++)
        	{
           		i = k;
            	p = arr1[i];
            	if (arr1[i]!=0)
            	{
            	    ans=ans*26%mod;
            	    while (arr2[i]!=p)
            	    {
            	        j = i;
            	        i = arr2[arr1[i]];
            	        arr1[j] = 0;
            	    }
            	    arr1[i] = 0;
            	}
        	}
        	cout<<ans<<endl;
        }         
    }
    return 0;
} 
