#include<iostream>

using namespace std;

int main(){
	
	int year,i;
	
	cout<<"Enter any year : \n";
	cin>>year;
	
	for(i=2000; i<3000; i++){
		
		if(year % 4 == 0){
			
			cout<<"This is a leap year : \n";
			cin>>year;
		}else{
			
			cout<<"This is a not leap year : \n";
			cin>>year;
		}
	}
	
	return 0;
}
