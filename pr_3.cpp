#include<iostream>

using namespace std;

int main(){
	
	char a;
	
	cout<<"Enter a  number : ";
	cin>>a;
	
	if(a=='a' || a=='e'|| a=='i' || a=='o'|| a=='u'){
		
		cout<<"This is a vowel :";
	}else{
		
		cout<<"This is not vowel :";
	}
	
	return 0;
}
