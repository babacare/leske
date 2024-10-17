/*
MAINA WANGUI
CT101/G/23707/24
3D ARRAYS
*/

#include <stdio.h>

int main (){
    int i, j, k;
    int marks[2][2][3] = { {{44,56,09}, {55,70,50}}, {{13,78,90},{40,56,66}} };

    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            for(k=0; k<3; k++){
                printf("Marks[%d][%d][%d] = %d \n", i,j,k, marks[i][j][k]);
            }
        }
    }
    return 0;
}