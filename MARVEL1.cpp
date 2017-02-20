#include<iostream>
using namespace std;

int main()
{
	int e,l,o,i,j,count;
	cin>>e;
	while(e--)
	{
		cin>>l>>o;
		count=0;
		for(i=1;i<l;i++)
		{
			for(j=i+1;j<=l;j++)
			{
				if((i+j)%o==0)
				{
					count++;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
