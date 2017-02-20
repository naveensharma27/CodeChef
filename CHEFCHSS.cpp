#include<iostream>
using namespace std;

int main()
{
	int t,F1,F2,R1,R2,R3,R4;
	float p1,p2,p3,p4,Profit1,Profit2;
	cin>>t;
	while(t--)
	{
		cin>>F1>>F2>>R1>>R2>>R3>>R4>>p1>>p2>>p3>>p4;
		Profit1=p1*p2*R1 + p1*(1-p2)*R2 - F1;
		//cout<<Profit1<<endl;
		Profit2=p3*R3 + p3*p4*R4 - F2;
		//cout<<Profit2<<endl;
		
		if(Profit1>Profit2)
		{
			cout<<"FIRST"<<endl;
		}
		else if(Profit1<Profit2)
		{
			cout<<"SECOND"<<endl;
		}
		else
		{
			cout<<"BOTH"<<endl;
		}
	}
}
