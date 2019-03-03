#include<iostream>
#include<conio.h>

using namespace std;

int main(){

	int n=0,i=0;

    int sum=0;

	cout<<"enter the number of students : ";
	cin>>n;

    int student[n];

	cout<<"enter the numbers for students : "<<endl;

	for(i=0;i<n;i++){
        cout<<"you have entered student  "<<i+1<<" : ";
		cin>>student[i];
        sum += student[i];
	 }

    cout<<"sum is : "<<endl;;
    cout<<sum<<endl;
    cout<<"avg marks : "<<sum/n<<endl;



    //maxium
    int max=0;

    max = student[0];
    for(i=0;i<n;i++){

     if(max < student[i]){
        max = student[i];
        }
       }

   cout<<"maximum mark : "<<max<<endl;

   //minimum
   int min = 0;
   min = student[0];
   for(i=0;i<n;i++){
    if(min>student[i])
        min = student[i];
   }
   cout<<"minimum mark : "<<min<<endl;
getch();
}
