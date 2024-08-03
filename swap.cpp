#include<iostream>
using namespace std;
class Swap
{
	public:int a,b,temp;
	int getdata()
	{
		cout<<"ENTER TWO NUMBERS:"<<a<<b;
		cin>>a>>b;
		cout<<"\n VALUES BEFORE SWAPPING:"<<a<<" "<<b;
	}
	int calculate()
	{
		temp = a;
		a = b;
		b = temp;
		cout<<"\n VALUES AFTER SWAPPING:"<<a<<" "<<b;
		
	}
};
int main()
{

Swap obj;
obj.getdata();
obj.calculate();
}
