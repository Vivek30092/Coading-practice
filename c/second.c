#include <stdio.h>

int main() {
 int myNum;
  printf("enter age : ");
  scanf("%d",myNum);
  printf("Type new age : "); 
  scanf("%d", &myNum);
  printf("Your updated age: %d", myNum);
  return 0;
}