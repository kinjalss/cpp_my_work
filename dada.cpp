#include<iostream>
using namespace std;
int main()
{
	int s = 80;
	char a[s];
	int count = 0,i = 0;
	cout<<"ENTER YOUR STRING\t";
	cin.getline(a,s);
	while(a[i]!='\0')
	{
		if(a[i]=='a'||a[i]=='A')
		{
			count++;
		}
		i++;
	}
	cout<<"\n no of blankspaces are"<<count;
}
