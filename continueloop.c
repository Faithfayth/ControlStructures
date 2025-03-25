#include <stdio.h>

int main(){
    for(int i =0; i<=10; i++)         // ( innitialisation;  condition;  iteration)
    {   
        if (i==5){
            continue;                //skip the iteration when i=5
        }   
        printf("%d\n",i);    //runs the loop until the condition is false
    }
   return 0;
}