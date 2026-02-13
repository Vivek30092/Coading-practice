// bitwise operator(&)
#include<iostream>
using namespace std;
int main(){
    // bitwise and[&]
    int a = 4, b = 8;
    cout<<(a&b)<<endl;  //bitwise and 

    // bitwise OR [|]
    cout<<(4|8)<<endl;

    // bitwise XOR[^]
    /*
    0 --> for same bits
    1 --> for different bits
    */
    cout<<(4^8)<<endl;

    // bitwise leftShift[<<]
    /*n<<i  n shifts i places left*/
    cout<<(4<<1)<<endl;

    // bitwise rightShift[>>]  
    cout<<(10>>1)<<endl;
    

    return 0;
}