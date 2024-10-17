/*
MAINA WANGUI
CT101/G/23707/24
Function call assignment
*/
#include <stdio.h>
#include <math.h>

int sum(int x, int y, int z);
int multiplication(int a, int b);

int main (){
    int x, y, z, a, b, c;
    printf("Please enter 3 values: ");
    scanf("%d%d%d", &a,&b,&c);
    x = sum(a, b, c);
    z = sum(100, 200, 300);
    y = multiplication(a,c);

    printf("The sum is %d \n", x);
    printf("The 2nd sum is %d \n", z);
    printf("The multiplication is %d \n", y);

    return 0;
}

int sum(int x, int y, int z){
    int result;
    result = x + y + z;

    return result;
}

int multiplication(int a, int b){
    int result;
    result = a *b;
    return result;
}