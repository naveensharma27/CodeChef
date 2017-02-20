#include<iostream>
using namespace std;
long func(long n)
{
	long sum = 0, remainder;  
   while (n != 0)
   {
      remainder=n%10;
      sum=sum + remainder;
      n=n/10;
   }
   return sum;
}
int main()
{
	
	long i,n,count=0,x,dn,di,diff;
	cin>>n;
	i=n;
	while((n-i)<100 && (i>0))
	{
		x=i+func(i)+func(func(i));
		if(x==n)
			count++;
			i--;
	}
	cout<<count;
} 
