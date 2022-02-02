#include <stdio.h>

#define PI 3.14

void main()
{
    float radius,area,circumference;
    printf("Enter the radius of circle:");
    scanf("%f",&radius);
    area = PI * radius *radius;
    printf("Area of Circle: %f\n",area);
    circumference = 2 * PI * radius;
    printf("Circumference of Circle: %f\n",circumference);
}
