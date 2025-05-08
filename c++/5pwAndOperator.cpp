//first program to print the value if it is even and divisiable by 3
#include<iostream>
using namespace std;
/*int main(){
   int num;
    cout<<"enter the number:";
    cin>>num;
    if((num%2==0) && (num%3==0))     //AND operator
    {cout<<num<<endl;}
    else
    {cout<<"enter different number";}
    return 0;
}
*/
//second program to print the value if it is divisiable by 3 or 5
int main(){

        int num;
        cout<<"enter the number:";
        cin>>num;
        if((num%3==0) || (num%5==0))     //OR operator
        {cout<<num<<endl;}
        return 0 ;
        
}
