//first multiple of 5 and 7 both
#include<iostream>
using namespace std;
int main(){
    for(int i=5;;i+=5){
        if(i%7==0){
            cout<<i<<endl;
            break;
        }
    }
    
   int i=5;
   while(true){
    if(i%7==0){
        cout<<i<<endl;
        break;
    }
    i+=5;
   }
   return 0;
}