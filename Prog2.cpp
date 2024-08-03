#include<iostream>
using namespace std;
int main(){

int n1 = 0;
int n2 = 1;
int res = n1+n2;

int limit;
cout<<"Enter the limit to print Fibonacci series:";
cin>>limit;

cout<<n1 <<" ";
cout<<n2; 


for(int i=3;i<=limit;i++){
cout<<" "<<res;
n1 = n2;
n2 = res;
res = n1+n2;
	
}
return 0;
}
