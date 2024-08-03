#include<iostream>
using namespace std;
class ABC
{
	public:int num;
	int getdata()
	{
		cout<<"ENTER NUMBER \t";
		cin>>num;
		
	}
	int putData(); // declaration to tell that , there is relation of putdata nd class as(put data is a member of class)
};
int ABC :: putData()
{
	cout<<"\n VALUE OF NUM IS "<<num;
}
int main()
{
	ABC obj;
	obj.getdata();
	obj.putData();
}
