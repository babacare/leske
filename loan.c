// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int age, income;
    printf("Please Enter Your Age:");
    scanf("%d", &age);

if(age >= 18){
    printf("Please enter your monthly income: ");
    scanf("%d", &income);
  if(income >= 21000){
     printf("Congratulations you qualify for a loan");
 }
 else{
     printf("Unfortunately, we are unable to offer you a loan at this time");
 }
}
else{
    printf("Unfortunately, we are unable to offer you a loan at this time");
}

    

    return 0;
}