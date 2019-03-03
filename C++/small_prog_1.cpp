#include<iostream>
#include<conio.h>
using namespace std;


int main()
{
	
	int n;
	cin>>n;
	if(n%2==0 & n>0){
		
		cout<<"the number is even"; 
	}
	
	else if(n==0){
		
		cout<<"enter number rather than 0";
	}
	
	else{
		cout<<"number is odd";
	}
	
}
