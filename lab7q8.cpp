//include library
#include <iostream>
using namespace std;
/*
Write a C++ program to find GCD (HCF) of two numbers using recursion.
*/	


int hcf(int x, int y){
	if(y==0){
		return x;
	}
	else{
		return hcf(y,x%y);
	}
}



int main(){
	int x, y;
	cout << "Enter two positive integers: ";
	cin >> x;
	cin>>y;
	cout << "H.C.F of the two numbers is: " << hcf(x,y);
	return 0;
}






