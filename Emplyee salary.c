//Name : Joel muriithi
//Reg no: 30656
#include <stdio.h>

float calculateTax(float grossSalary)
{
    float tax;

    if (grossSalary < 30000)
    {
        tax = grossSalary * 0.05;
    }
    else if (grossSalary < 60000)
    {
        tax = grossSalary * 0.10;
    }
    else
    {
        tax = grossSalary * 0.15;
    }

    return tax;
}

int main()
{
float grossSalary, tax, netSalary;

printf("Enter gross salary: ");
scanf("%f", &grossSalary);

tax = calculateTax(grossSalary);

netSalary = grossSalary - tax;

printf("Gross Salary: KSh %.2f\n", grossSalary);
printf("Tax Amount: KSh %.2f\n", tax);
printf("Net Salary: KSh %.2f\n", netSalary);

    return 0;
}
