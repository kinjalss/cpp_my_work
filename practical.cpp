#include<iostream>
using namespace std;
class circle{
	private:
		float rad,x
		,y;
		public:
			circle()
			{
				x=0;
				y=0;
				rad=0;
			}
			int getdata()
			{
				cout<<"\n ENTER x and y co-ordinates of centre point::";
				cin>>x>>y;
				cout<<"\n ENTER RADIUS:";
				cin>>rad;
			}
			int area()
			{
				float ar=3.14*rad*rad;
				cout<<"\n AREA:"<<ar;
			}
			int circumference()
			{
				cout<<"\n CIRCUMFERENCE:"<<2*3.14*rad;
			}
		
			
};
			int main()
			{
			
			circle o;
			o.getdata();
			o.area();
			o.circumference();
		}

