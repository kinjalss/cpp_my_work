#include<string.h>
#include<iostream>
using namespace std;
int main()
{
	char name1[15];
	char name[15];
	puts("ENTER STRING:");
	gets(name);
	puts(name);
	int l = strlen(name);
	cout<<"LENGTH OF STRING:"<<l;
	cout<<"\n";
	cout<<strrev(name);
	cout<<name;
	strcpy(name1,name);
	cout<<"  ORIGINAL STRING:"<<name;
	cout<<"  AFTER COPY:"<<name1;
}
