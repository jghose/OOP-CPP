
#include<iostream>
#include<conio.h>
using namespace std;

class student{

 public:
    string name;
    int id;
    float gpa;

    void display(){

        cout<<"your name is :"<<name<<endl<<"your id is :"<<id<<endl<<"your gpa is :"<<gpa<<endl;

    }

};


int main(){

  student s1;
  cout<<"enter name id and gpa : "<<endl;
  cin>>s1.name;
  cin>>s1.id;
  cin>>s1.gpa;

  s1.display();

}
