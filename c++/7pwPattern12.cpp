#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter num: ";
    cin>>num;
    for (int i = 1; i <= num; i++) {
        for (int j = i; j < num; j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1) || i == num) {
                cout << i; 
            } else {
                cout << " ";
            }
        }
        cout<<endl;
        }
    return 0;
    }



/*

   1
  2 2
 3   3 
4444444


*/