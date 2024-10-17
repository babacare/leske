

#include <stdio.h>
#include <math.h>
/*
Maina Wangui
CT101/G/23707/24
For Loop
 */

int main(){
    int i, sum=0;

    for(i=27; i>0; i--){
        printf("%d \n",i);

        sum = sum + i;

    }
    printf("Sum is %d", sum);


    return 0;
}