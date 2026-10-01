// Name: Joel Muriithi
// Reg no: CT100/30656/26

#include <stdio.h>

int main()
{
    float height, radius;
    float volume, surfaceArea;
    const float PI = 3.142;

    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    volume = PI * radius * radius * height;
    surfaceArea =2 * PI * radius * (radius + height);

    printf("\nvolume = %.2f\n", volume);
    printf("\nSurface Area = %.2f\n", surfaceArea);

    return 0;
}
