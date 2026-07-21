#include <stdio.h>
//define a value for PIE
#define PIE 3.14

int main()
{
    //initialize variable
    float radius;

    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);

    //do the maths
    float area;
    area = PIE * radius * radius;

    printf("The area of the circle is: %f\n", area);
}