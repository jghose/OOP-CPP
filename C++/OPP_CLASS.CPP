#include<iostream>
#include<conio.h>
using namespace std;

class student{

 public:
    string name;
    int id;
    float gpa;


};


int main(){

  student s1;

  s1.name = "don";
  s1.id = 113;
  s1.gpa = 6.54;
  cout<<s1.name<<endl<<s1.id<<endl<<s1.gpa<<endl;
  cout<<" " <<endl;
  student s2;

  s1.name = "joh";
  s1.id = 555;
  s1.gpa = 6.94;
  cout<<s1.name<<endl<<s1.id<<endl<<s1.gpa;
}
