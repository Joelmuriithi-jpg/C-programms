//Name : Joel muriithi
//Reg no: 30656
#include <stdio.h>

float calculateBill(int units)
{
float bill;

if (units <= 100)
{
bill = units * 10;
}
else if (units <= 200)
{
bill = (100 * 10) + ((units - 100) * 15);
}
else
{
bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
}
return bill;
}

int main()
{
int units;
float bill;

printf("Enter number of units consumed: ");
scanf("%d", &units);

bill = calculateBill(units);

printf("Units Consumed: %d\n", units);
printf("Total Electricity Bill: KSh %.2f\n", bill);

return 0;
}