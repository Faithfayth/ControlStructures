#include <stdio.h>

int main(){

    int x;
    

    here:
    printf("Enter a number between 1 and 10: ");
    scanf("%d",&x);

    if(x<1 || x>10 ){
        goto here;
    } 
    else {
        printf("Your right");
    }
    
    return 0;
}