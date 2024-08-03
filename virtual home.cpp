#include<iostream>
using namespace std;
class base
{
	public:
	int display()
	{
		cout<<"base class";
	}
	
};
class derived:public base
{
	int display()
	{
		cout<<"derived class";
	}
};
int main()
{
	base*ptr; // ptr is a variable which stores the address of data in base class
	derived obj;  // obj la declare kela by syntax(classname objectname)
	ptr = &obj;  //  stores the address of object's data..nd here obj call is derived 
	ptr->display(); // call display function..(EXPECTED-derived obj's....REALITY-base)...REASON- follows early binding
	 
}
