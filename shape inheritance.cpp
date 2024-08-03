#include<iostream>
using namespace std;
class shape
{
	public: int x,y,a,b;
	int getdata()
	{
		cout<<"\n enter x and y:";
		cin>>x>>y;
	}
		int getvalue()
		{
			cout<<"\n enter value of a and b:";
			cin>>a>>b;
		}
};
class triangle:public shape
{
	public:
		int calculate()
		{
			cout<<"\n AREA OF TRIANGLE:"<<0.5*x*y;
		}
};
class rectangle:public shape
{
	public:
		int area()
		{
			cout<<"\n AREA OF RECTANGLE: "<<a*b;
		}
};
int main()
{
	triangle obj1;
	obj1.getdata();
	obj1.calculate();
	rectangle obj2;
	obj2.getvalue();
	obj2.area();
}
