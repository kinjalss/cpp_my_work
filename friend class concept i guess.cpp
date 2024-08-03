#include<iostream>
using namespace std;
class abc
{
	public:int a = 10;
	int show()
	{
		cout<<"INSIDE CLASS VALUE OF a:"<<a;
	}
	
};

int main()
{
	abc obj;
	obj.show();
	cout<<"\n VALUE OF a OUTSIDE CLASS IS:"<<obj.a;
}
