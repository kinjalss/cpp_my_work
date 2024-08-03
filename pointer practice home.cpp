#include<iostream>
using namespace std;
int main()
{
	int *ptr;
	int a = 10;
	cout<<"\n""VALUE OF a:"<<a;
	ptr = &a;
	cout<<"\n""SHOW ADDRESS ON a:"<<ptr;
	cout<<"\n""VALUE STORED ON ADDRESS CONTAINING a VARIABLE:"<<*ptr;
}
