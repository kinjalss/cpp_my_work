#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	char buffer[80];
	ofstream fout;  // write operation...object.
	fout.open("country.doc");
	fout<<"\n INDIA";
	fout<<"\n US";
	fout<<"\n UK";
	fout<<"\n PAKISTAN";
	fout.close();
	
	fout.open("capital.doc");
	fout<<"\n DELHI";
	fout<<"\n WASHINGTON DC";
	fout<<"\n LONDON";
	fout<<"\n ISLAMABAD";
	fout.close();
	ifstream fin,fin1;  //read operation
	fin.open("country.doc");
	fin1.open("capital.doc");
	
	
	while(fin||fin1)
	{
		if(fin.eof()!=0)
		{
			exit(1);
		}
		fin.getline(buffer,80);
		cout<<"\n"<<buffer;
		if(fin1.eof()!=0)
		{
			exit(1);
		}
         fin1.getline(buffer,80);
		cout<<"\t\t"<<buffer;
    }
}
