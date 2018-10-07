// include library
#include<iostream>
using namespace std;
/*
 Write a C++ program to find reverse of any number using recursion.
*/

int reverse(int x, int y){
	if(x==0){
		return y;
	}
	return reverse(x/10, (y*10) + (x%10)) ;
}

int main(){
	cout<<"this program reverse the number"<<endl;
	cout<<"write a number - ";
	int x;
	cin>>x;
	cout<<"the reverse is - "<<reverse(x,0)<< endl;
	return 0;
}  
