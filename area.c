/* 2. Write a C program to find the Area of a Rectangle by Entering Length and Breadth. */

#include <stdio.h>

int main(void)
{
    float l , b , area;

    //taking input (no negetives)
    do
    {
        printf ("enter lenght and breadth \n");
        scanf ("%f %f", &l, &b);
    
    }
    while ((1 < 0) || (b < 0));

    //area calculation
    area = l * b;

    //output
    printf("area of rectangle = %.3f \n", area);

    return 0;
}