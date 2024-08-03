#include<iostream>
using namespace std;
int main()
{
	int s = 80;
	char a[s];
	cout<<"ENTER STRING\t :";
	cin.getline(a,s);
	a[3]='-';
	cout<<a;
}
