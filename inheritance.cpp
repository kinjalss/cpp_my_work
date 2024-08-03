#include <iostream>
using namespace std;
class ABC
{
	public:int a;
	int getdata()
	{
		cout<<"\n ENTER a:";
		cin>>a;
	}
	int calculate()
	{
		cout<<"\n SQAURE IS "<<a*a;
	}
};


	class PQR:public ABC
	{
	
	public:int b;
	int getb()
	{
		cout<<"\n ENTER b:";
		cin>>b;
	}
	int sum()
	{
		cout<<"\n "<<a+b;
	}
};

int main()
{
	PQR obj;
	obj.getdata();
	obj.calculate();
	obj.getb();
	obj.sum();
	
}

