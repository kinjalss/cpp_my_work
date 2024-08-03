#include<iostream>
using namespace std;
class circle
{

private:
	float rad,x,y;
	public:
		 circle()
		{
			rad=0;
			x=0;
		 y=0;
		}
		int getdata()
		{
			cout<<"ENTER VALUE OF X co-ordinate AND Y co-ordinate of centre point";
			cin>>x>>y;
			cout<<"ENTER VALUE OF RADIUS";
			cin>>rad;
		}
		int area()
		{
			float ar;
			ar=3.14*rad*rad;
			cout<<"AREA:"<<ar;
		}
		int circumference()
		{
			cout<<"CIRCUMFERENCE:"<<2*3.14*rad;
		}
		int main()
		{
		
		circle o;
		o.getdata();
		o.area();
		o.circumference();
	}
};
		
