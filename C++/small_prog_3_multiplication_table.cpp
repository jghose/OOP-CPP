#include<iostream>

using namespace std;

int main()
{
	int n,i,j;
	
	cout<<"enter the value"<<endl;
	cin>>n;
	
	for(i=1;i<=10;i++){
		
		j = n * i ;
		cout<< n << "*" <<i<<" = "<< j<<endl;
	}

}
