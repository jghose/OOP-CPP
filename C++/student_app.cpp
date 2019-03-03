#include<iostream>


using namespace std;

int main(){

	int n,i;
	int student[5]= {};
    int sum;

	//cout<<"enter the number of students : ";
	//cin>>n;

	cout<<"enter the numbers for students : "<<endl;

	for(i=0;i<5;i++){

		cin>>student[i];
		cout<<" "<<endl;

        sum = sum + student[i];

	 }
cout<<sum<<endl;
}
