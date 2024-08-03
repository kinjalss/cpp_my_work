#include<iostream>
using namespace std;
class riya
{
	public:
		int a = 10;
		int show()
		{
			cout<<"INSIDE THE CLASS VALUE OF a:"<<a;
		}
	
};
int main()
{

riya obj;
obj.show();
cout<<"OUTSIDE THE CLASS VALUE OF a:"<<obj.a;
}
