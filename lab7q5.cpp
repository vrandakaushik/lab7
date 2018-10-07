// include library
#include<iostream>
using namespace std;
/*
 Write a C++ program to find sum of digits of a given number using recursion.
*/

int numsum(int x){
	if(x!=0){
		return x%10+ numsum(x/10);
	}
	else{
		return 0;
	}
}

int main(){
	cout <<" this program tells you the sum of the digits of a number that you want to know."<<endl;
	cout<<"write a number -";
	int x;	
	cin>>x;
	cout << "the sum of the digits is "<< numsum(x)<<endl;
}
