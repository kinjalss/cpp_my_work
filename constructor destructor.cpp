#include<iostream>
using namespace std;
class ratio
{
	public:
	ratio(int a)
	{
		cout<<a;
	}
	ratio()
	{
	cout<<"\n object is born";
	}
	~ratio()
	{ 
	cout<<"\n object dies";
	}
private: int num,den;
};
int main()
{
	ratio obj1 (5);
	ratio obj;
	cout<<" \n object is alive";
	cout<<" \n at end of prog";
	
}
