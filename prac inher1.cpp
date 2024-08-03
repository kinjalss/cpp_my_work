#include <iostream>
using namespace std;
class RIY
{
	public:int a;
		int getdata()
		{
		cout<<"\n ENTER VALUE OF a:"<<a;
		cin>>a;
}

	int calculate()
	{
		cout<<"\n SQUARE IS:"<<a*a;
	}
};
class KIN:public RIY
{
	public:int b;
	int getb()
	{
	
	cout<<"\n ENTER VALUE OF b:"<<b;
	cin>>b;
}
int sum()
{
	cout<<"SUM IS:"<<a+b;
}
	
 };
 int main()
 {
 	KIN obj;
 	obj.getdata();
 	obj.calculate();
 	obj.getb();
 	obj.sum();
 	
  } 
