#include<stdio.h>
#include<iostream>

using namespace std;

int main(){

	int a, b;

	cout<<"Enter Used ID : ";
	cin>>a;

	cout<<"Enter Password : ";
	cin>>b;

	if(a == 123 && b == 45){
		cout<<"Login Successful";
	} else {
        cout<<"Login Unsuccessful, Try Again";
	}

	cout<<"\n";

	return 0;

}
