#include <iostream>
using namespace std;
int main(){
    int num;
    num = 3;
    int number = 1;
    for(int i = 0;i<num;i++){
        for(int j = 0;j<num;j++){
            cout<<number<<" ";
            number +=1;
        }
        cout<<endl;
    }
    return 0;
}