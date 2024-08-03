 #include<iostream>
 using namespace std;
 int main()
 {
 	int *ptr;       // declaration of pointer i.e..here,pointer contains a variable of returntype int.
 	int a = 10;
 	ptr = &a;      // pointer holds value of variable a ....(variable a varcha address dakhvel)
 	cout<<"\n"" VALUE OF a :"<<a;
 	cout<<"\n""ADDRESS OF a:"<<ptr;
 	cout<<"\n""VALUE STORED ON ADDRESS a:"<<*ptr;  // address vr jo variable declare kelay tyachi value dakhav
 }
