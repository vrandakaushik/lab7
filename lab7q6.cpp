// library
#include<iostream>
using namespace std;

/*
  Write a C++ program to find power of any number using recursion.
*/


int pow ( int n,int x){
	
	if(x==0){
		return 1;
	}
	else{ 
		return n*pow(n,x-1);
	}
}




int main(){
	cout<< "what is the number?"<<endl;
	int n;	
	cin>>n;
	cout<<"what is the power you require?"<<endl;
	int x;
	cin>>x;
	cout<< "the answer is "<<  pow(n,x) << endl;
	return 0;
	}
