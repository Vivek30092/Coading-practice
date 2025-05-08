//to find sum for n natural number
#include<iostream>
using namespace std;
int main(){
	int sum=0;
	int n;
	cout<<"enter the number : ";
	cin>>n;
	int i=1;                     //loop variable2
	while(i<=n){
		sum = sum+i;
		i++;
	}
	cout<<"sum of first "<<n<<" number is : "<<sum;

	return 0;
}
