// operator                     precedence          Associativity
/*  
!,+,-(unary operators)          first               [R to L]
*,/,%                           second              [L ro R]
+,-,                            third               [same as above]
bitwise operator                fourth
<,<=,>=,>                       fifth   
==,!=                           sixth
&&                              seventh
||                              seventh             [same as above]
=(assignment operator)          eighth              [R to left]
*/


// scope
/*
1. Local scope
2. global scope
*/


// data type modifiers : changes meaning of data types
/*
1. long(>=4B) : longint, longdouble
2. short()
3. long long
4. singed
5. unsigned
*/

#include<iostream>
using namespace std;
int main(){
    cout<<sizeof(int)<<endl;
    cout<<sizeof(long int)<<endl;
    cout<<sizeof(short int)<<endl;
    cout<<sizeof(long long int)<<endl;
    return 0;
}