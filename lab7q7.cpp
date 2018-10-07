//include library
#include <iostream>
using namespace std;
/*
Write a C++ program to find factorial of any number using recursion.
*/

int fact(int x){
	if(x==0){
		return 1;
	}
	else{
		return x*fact(x-1);
	}
}

int main(){
	cout<<"this program prints the factorial of an number."<<endl;
	cout<<"write a number - ";
	int x;	
	cin>>x;
	cout<<"the factorial of the number is - "<<fact(x)<<endl;
	return 0;
}




