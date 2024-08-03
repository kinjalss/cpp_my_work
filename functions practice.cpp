#include<iostream>
using namespace std;
int swap(int c,int d)
{
	int temp;
	temp = c;
	 c = d;
	d = temp;
	cout<<"\n  VALUE AFTER SWAPING:"<<c<<d; 
	
}


int main()
{
	int a,b;
	cout<<"ENTER VALUES OF a and b:";
	cin>>a>>b;
	cout<<"\n  VALUE BEFORE SWAPING:"<<a<<b;
	 swap(a,b);
}
