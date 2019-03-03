#include<iostream>
#include<conio.h>
using namespace std;

int fact(int n){

if(n==1){
    return 1;
}

else{
    return n * fact(n-1);
   }

}
int main(){
int a=0;
cout<<"enter the value of a : ";
cin>>a;
int m = fact(a);
cout<<a<<"!"<< " = " <<m;
}
