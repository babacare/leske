#include <stdio.h>
#include <math.h>

/*
Maina Wangui
CT101/G/23707/24
LIBRARY FINE CALCULATOR
*/

int main() {
    int bookID, overdueDays, dueDate, returnDate;;
    float fineAmount;

    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    printf("Enter Due Date (YYYYMMDD): ");
    scanf("%d", &dueDate);
    printf("Enter Return Date (YYYYMMDD): ");
    scanf("%d", &returnDate);
    
    //Dates should be enterd without spaces

    overdueDays = returnDate - dueDate;

    
    if (overdueDays <= 7) {
        fineAmount = 20.0;
    } else if (overdueDays  <= 14) {
        fineAmount = 50.0;
    } else {
        fineAmount = 100.0;
    }

    
    printf("\nBook ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", overdueDays);
    printf("Fine Rate: Ksh %.2f\n", fineAmount);

    return 0;
}
