#include<iostream>
#include<conio.h>
using namespace std;

int main(){
int row,col,i,j,r_size=0,c_size=0;



cout<<"enter the size of row :" <<endl;
cin>>r_size;
cout<<"enter the size of col : "<< endl;
cin>>c_size;

int A[r_size][c_size];


cout<<"enter the elements to the array : "<<endl;
for(row=0;row<r_size;row++){
    for(col=0;col<c_size;col++){
        cin>>A[row][col];
    }
}




 for(row=0; row<r_size; row++){
    for(col=0; col<c_size ; col++){
      cout<<A[row][col]<<" " ;
    }
    cout<<endl;
}





return 0;
}

