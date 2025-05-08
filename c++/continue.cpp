//print all num between 1 to 50 except multiple of 3
#include<iostream>
using namespace std;

//using for loop
int main(){
    int i = 1;
    for(i=1;i<51;i++){
        if (i%3==0){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}
