// Name: Joel Muriithi
//Reg no: CT100/G/30656/26

#include <stdio.h>
#include <math.h>
int main()

{
    int age;
    float annualincome;
    
    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter annual income(in Ksh): ");
    scanf("%f", &annualincome);

     if(age>=21 && annualincome>=21000 )
     
     printf("Cogratuation you qualify for a loan.\n");
     else
     printf("Unfortunately we are unable to offer you a loan.\n");
     
     return 0;
}
