#include <stdio.h>
#include <math.h>

int main()
    {
        int  principalamount, duration;
        float rate, simpleinterest;
        rate= 14;
        duration= 3;

        printf("Enter loan amount:");
        scanf("%d", &principalamount);

        /* simple interest= (Principle * Rate * Time)/100
            principal amount= Principle
            duration= Time
        */

        simpleinterest= (principalamount * rate * duration)/100;

        printf("Simple Interest: %f", simpleinterest);


        return 0;

    }

