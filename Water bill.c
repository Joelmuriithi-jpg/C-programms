#include <stdio.h>

int main(void) {
    double units, rate, total_bill;

    printf("Enter water units consumed: ");

    if (scanf("%lf", &units) != 1 || units < 0) {
        printf("Please enter a valid non-negative number of units.\n");
        return 1;
    }

    if (units <= 30) {
        rate = 20.0;
    } else if (units <= 60) {
        rate = 25.0;
    } else {
        rate = 30.0;
    }

    total_bill = units * rate;

    printf("Total water bill: KES %.2f\n", total_bill);

    return 0;
}