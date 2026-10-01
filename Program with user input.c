// Name: Joel Muriithi
// Reg no: CT100/30656/26

#include <stdio.h>
int main()
{
    float height;
    double bankbalance;
    char phoneNumber[11];

    printf("Enter you heihgt(in meters): ");
    scanf("%f", &height);

    printf("Enter your bank bance(in Ksh): ");
    scanf("%lf", &bankbalance);

    printf("Enter your phone number: ");
    scanf("%10s", phoneNumber);

    printf("\n======User Details======\n");
    printf("Height: %.2f meters\n", height);
    printf("Bank Balance: Ksh%.2f \n",bankbalance);
    printf("Phone Number: %s\n", phoneNumber);
    

    return 0;
}

