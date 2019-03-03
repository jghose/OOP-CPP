#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	int num1;
	cout<<"enter the number"<<endl;
	cin>>num1;
	
	
	if(num1>100 ){
		cout<<"invalid number";
	}
	
		if(num1<=0 ){
		cout<<"invalid number";
	}
	
	
	else if(num1>0 & num1<=33){
		cout<<"F";
	}
	
		else if(num1>33 & num1<=40){
		cout<<"P";
	}
	
		else if(num1>40 & num1<=50){
		cout<<"D";
	}
	
		else if(num1>50 & num1<=60){
		cout<<"C";
	}
		else if(num1>60 & num1<=70){
		cout<<"B";
	}
	
		else if(num1>70 & num1<=80){
		cout<<"A-";
	}
		else if(num1>80 & num1<=90){
		cout<<"A";
	}
		else if(num1>90 & num1<=100){
		cout<<"A+";
	}
	
}
