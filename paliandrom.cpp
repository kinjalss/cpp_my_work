#include<iostream>
using namespace std;
int main()
{
	int n,num,digit,rev=0;
	cout<<" ENTER ANY POSITIVE INTEGER ";
	cin>>num;
	n=num;
	do
	{
		digit=num%10;
		rev=(rev*10)+ digit;
		num=num/10;
	}while(num!=0);
	cout<<" THE REVERSE DIGIT IS "<<rev<<endl;
	if(n!=rev)
	cout<<" THE NUMBER IS PALIANDROM "<<endl;
	else
	cout<<" THE NUMBER IS NOT A PALIANDROM "<<endl;
	return 0;
	
}
