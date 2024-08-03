#include<iostream>
using namespace std;
int main()
{
	int size,i,sq;
	cout<<"ENTER VALUE OF SIZE:";
	cin>>size;
	int a[size];
	for(i=0;i<size;i++)
	{
		cout<<"ENTER VALUE:";
		cin>>a[i];
		
	}
	for(i=0;i<size;i++)
	{
		sq = a[i]*a[i];
		cout<<"\n"<<sq;
	}
}
