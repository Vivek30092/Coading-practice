#include<iostream>
#include<string>
using namespace std; 
int main(){
	int marks;
	cout<<"enter your marks : ";
	cin>>marks;
	marks>33 ? cout<<"pass"<<endl : cout<<"fail"<<endl;
	return 0;
}