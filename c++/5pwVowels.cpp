//program to check that the intered character is vowel or consonent
#include<iostream>
using namespace std;
int main(){
    char character;
    cout<<"enter any character from a-z  : ";
    cin>>character;

    switch(character){
        case 'a':
        cout<<"it's a vowel";
        break;

        case 'e':
        cout<<"it's a vowel";
        break;

        case 'i':
        cout<<"it's a vowel";
        break;

        case 'o':
        cout<<"it's a vowel";
        break;

        case 'u':
        cout<<"it's a vowel";
        break;

        default:
        cout<<"it's  a consonant";
        break;
    }
    return 0;
    }