#include<iostream>
#include<conio.h>
using namespace std;

class student{

    public:
        void display(){

           cout<< "i am student"<<endl;
        }
};

class teacher{
    public:
        void display(){

           cout<< "i am teacher"<<endl;
        }
};
class parent{

    public:
        void display(){

           cout<< "i am parent"<<endl;
        }
};


int main(){
    student s1;
    teacher t1;
    parent p1;

    s1.display();
    t1.display();
    p1.display();


}
