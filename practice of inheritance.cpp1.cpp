#include <iostream>
using namespace std;
class ABC
{
	public:int a;
	int getdata()
	{
	
	cout<<"\n ENTER VALUE OF a:";
	cin>>a;
}
		int calculate()
		{
		
	cout<<"\n SQUARE IS:"<<a*a;
}
};
class XYZ:public ABC
{
 public:int b;
 	int getb()
	 {
	 
 	cout<<"\n ENTER VALUE OF B:";
 	cin>>b;
 }
 	int  sum()
 	{
	 
 	cout<<"\n SUM IS:"<<a+b;
 }
};

int main()
{
	XYZ obj;
	obj.getdata();
	obj.calculate();
	obj.getb();
	obj.sum();
	
}

