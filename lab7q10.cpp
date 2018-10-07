// include library
#include<iostream>
using namespace std;
/*
 Write a C++ program to check whether a number is palindrome or not using recursion.
*/

int reverse(int x, int y){
	if(x==0){
		return y;
	}
	return reverse(x/10, (y*10) + (x%10)) ;
}

int palindrome(int x,int y){
	// y = reverse (x,0);
	if (x== y){
		cout<<"a palinrome is a number whose reverse is equal to the number."<<endl;
		cout<<" THUS, THIS NUMBER IS A PALINDROME."<<endl;
	}
	else{
	cout<<"a palinrome is a number whose reverse is equal to the number."<<endl;
	cout<<"THUS.THIS NUMBER IS NOT A PALINDROME"<<endl;
	}
}


int main(){
	cout<<"this program reverse the number"<<endl;
	cout<<"write a number - ";
	int x;
	cin>>x;
	cout<<"the reverse is - "<<reverse(x,0)<< endl;
	int y=reverse(x,0);
	cout<<palindrome(x,y)<<endl;
	return 0;
}  
