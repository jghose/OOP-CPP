#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	int row,col,i,n;
	
	cout<<"enter the number of lines: ";
	
	cin>>n;
	
	for(row=1; row<=n; row++){
		
		for(col=1; col<=row; col++){
			
		      cout<<col << " ";	
		}
		
		cout<<endl;
	}
	

}
