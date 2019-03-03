#include<iostream>
using namespace std;

class student{
    public:
        string name;
        int roll;
        float gpa;

     void display(){

       cout<<name<<endl;
       cout<<roll<<endl;
       cout<<gpa<<endl;
     }

};

class male : public student{

    public:
        int age;

    void display2(){

       cout<<name<<endl;
       cout<<roll<<endl;
       cout<<gpa<<endl;
       cout<<age<<endl;
    }
};

int main(){

 male m1;
 m1.name = "jack";
 m1.roll = 113;
 m1.gpa = 3.5;
 m1.age = 25;

 m1.display2();


}

