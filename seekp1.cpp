#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream obj;
	obj.open("test1.doc",ios::out);
	obj<<"hello world";
	obj.seekp(6);
	obj<<"msa cs";
} 
