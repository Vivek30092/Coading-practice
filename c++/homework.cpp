// program to perform arithematic operation
#include<iostream>
using namespace std;
int main(){
    char op;
    int a,b,c,d;
    cout<<"enter (1) to start or (0) to end : ";
    cin>>d;
    if(d==1){
    cout<<"choose the operator you want(+,-,*,/,%) : ";
    cin>>op;
    cout<<"first number : ";
    cin>>a;
    cout<<"second number : ";
    cin>>b;

    if(op=='+'){
        c=a+b;
        cout<<c;
    }
    else if(op =='-'){
        c=a-b;
        cout<<c;
    }
    else if(op == '*'){
        c=a*b;
        cout<<c;
    }
    else if(op == '/'){
        c=a/b;
        cout<<c;
    }
    else if( op == '%'){
        c=a%b;
        cout<<c;
    }
    else{
        cout<<"wrong operator";
    }}
    else {
          cout<<"program end.";
    }

    

    return 0;
}