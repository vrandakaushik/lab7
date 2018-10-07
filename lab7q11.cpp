// include library
#include <iostream>
using namespace std;
/*
Write a C++ program to generate nth Fibonacci term using recursion.
*/

int fibo(int x){
	if (x==0) return 0;
	else if (x==1) return 1; 
	else return fibo(x-1) + fibo(x-2);
}

int main(){
	int x;
	cout<<"this tells you the fibonaacci number."<<endl;
	cout<<"write the term you want to know- ";
	cin>>x;
	cout<<"the fibonaci number is - "<<fibo(x);
}
