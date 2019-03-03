#include<iostream>
#include<conio.h>
using namespace std;


class student{
public:
    int id;
    float gpa;
    void display(){
        cout<<id<<endl<<gpa<<endl;
    }

    student(int a , float b){

     id = a;
     gpa = b;

    }


};


int main(){
 student s1(12,3.5);

 s1.display();

}
