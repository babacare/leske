/*
MAINA WANGUI
CT101/G/23707/24
2D ARRAYS
*/

#include <stdio.h>

int main () {
    int i,j;
    int marks[2][3] = {{55, 34, 56}, {34,42,77}};
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("Marks [%d][%d] = %d \n", i,j, marks[i][j]);
        }
    }
    return 0;
}