#include<iostream>
using namespace std;

int main(){

int num1=10,num2=20;
int *p1= &num1;
int *p2 = &num2;

cout<<p1<<endl;
cout<<p2<<endl;
cout<<*p1<<endl;
cout<<*p2<<endl;

int num3 =  *p1 + *p2;

cout<<num3;



}
