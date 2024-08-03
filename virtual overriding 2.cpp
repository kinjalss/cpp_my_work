#include<iostream>
using namespace std;
class base
{
	public:
	virtual	int display()
		{
			cout<<"BASE CLASS";
		}
};
class derived:public base
{
	public:
	int display()
	{
		cout<<"DERIVED CLASS";
	}
	
};
int main()
{
	base*ptr;
	derived obj;
	ptr = &obj;
	ptr->display();
	
}
