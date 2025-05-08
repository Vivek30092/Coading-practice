/*practice Qs 38
Swap 2 numbers a & b using pointers.
*/

#include <stdio.h>

int swap(int a, int b);
int _swap(int *a, int *b);

int main(){
    int a = 1, b = 2;
    printf("a: %d, b: %d\n", a, b);
    swap(a, b); // call by value
    printf("a: %d, b: %d\n", a, b); // a and b are unchanged
    _swap(&a, &b); // call by reference
    printf("a: %d, b: %d\n", a, b); // a and b are swapped
    return 0;
}

int swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    printf("a: %d, b: %d\n", a, b);
    return 0;
}

int _swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("a: %d, b: %d\n", *a, *b);
    return 0;
}