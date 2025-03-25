#include <stdio.h>

int main(){

    int x;
    here:
    printf("Enter number between 1-10: ");
    scanf("%d\n",x);

    if(x<1 && x>10){
        goto here;

    } else {
        printf("Thats right.\n");
    }

    return 0;
}