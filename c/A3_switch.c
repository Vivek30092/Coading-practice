#include <stdio.h>
#include <stdlib.h>

int main(){
    int day;
    printf("enter day(1-7) :");
    scanf("%d",&day);
    switch (day){
        case 1 :  printf("monday \n");
        break;
        case 2 :  printf("TUESDAY \n");
        break;
        case 3 :  printf("WEDNESDAY\n");
        break;
        case 4 :  printf("THURSDAY \n");
        break;
        case 5 :  printf("FRIday \n");
        break;
        case 6 :  printf("SATURday \n");
        break;
        case 7 :  printf("SUNday \n");
        break;
        default : printf("enter valid number. \n");
        }
   return 0;
}
