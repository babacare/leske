#include <stdio.h>
#include <math.h>
/*
Maina Wangui
CT101/G/23707/24
ELECTICITY BILL CALCULATOR
*/

int main() {
    float chargesPerUnit, bill;
    char customerName[35];
    int  unitsConsumed, customerID;
  
    printf("Please enter your ID: ");
    scanf("%d", &customerID);
    printf("Please enter your name: ");
    scanf("%s", customerName);
    printf("Enter units consumed: ");
    scanf("%d", &unitsConsumed);

    if (unitsConsumed < 200) {
        chargesPerUnit = 1.20;
    } else if (unitsConsumed < 400) {
        chargesPerUnit = 1.50;
    } else if (unitsConsumed < 600) {
        chargesPerUnit = 1.80;
    } else {
        chargesPerUnit = 2.00;
    }

    bill = unitsConsumed * chargesPerUnit;

    
    if (bill > 400) {
        bill = bill * 1.15;
    }

    if (bill < 100) {
        bill = 100;
    }
    
    printf("\nCustomer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Charges per Unit: %.2f\n", chargesPerUnit);
    printf("Total Amount to Pay: %.2f\n", bill);

    return 0;
}
