#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	ifstream fin("test.doc");  //classname objectname
	char buffer[80];
	while(fin)
	{
		fin.getline(buffer,80);
		cout<<buffer;
	}
}
