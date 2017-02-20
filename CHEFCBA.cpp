#include<iostream>
using namespace std;
 
int main()
{
	int i,j;
	bool flag=false;
	float arr[4];
	cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
	for(i=0;i<4;i++)
	{
		for(j=i;j<4;j++)
		{
			if(arr[j%4]/arr[(j+1)%4]==arr[(j+2)%4]/arr[(j+3)%4] || arr[j%4]/arr[(j+1)%4]==1/(arr[(j+2)%4]/arr[(j+3)%4]))
			flag=true;
			j++;
		}	
	}
	if(flag)
	cout<<"Possible";
	else
	cout<<"Impossible";
	return 0;
} 
