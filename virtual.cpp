#include<iostream>
using namespace std;
class base
{
	public:
	 virtual int display()
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
		base *ptr;  //..stores the address of another class...stores the address of data and functions of class base
		derived obj;
		ptr = &obj;  // show the address of object of derived class..derived class madhlya objects i.e  data nd functions cha address dakhav.
		ptr->display();  
	}
