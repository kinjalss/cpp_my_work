#include<iostream>
using namespace std;
class riya
{
	public:
		int a = 10;
		int show()
		{
			cout<<" INSIDE THE CLASS VALUE OF a:"<<a;
			 // declaration of function in class
		}
		int display();
	
};
int riya::display() // use of declared function outside class
{
	cout<<"\n a contains:"<<a;
}
int main()
{

riya obj;
obj.show();
obj.display();
cout<<"\n OUTSIDE THE CLASS VALUE OF a:"<<obj.a;
}
