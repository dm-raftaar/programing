/* 4. Write a C program to find the Third Angle of a Triangle by Entering Two Angles */

#include <stdio.h>
int main(void)
{
    float angle1 , angle2 , angle3 ;
    //taking input ensuring angles actual from a triangle 
    do 
    {
        printf("enter tow angle af triangle \n");
        scanf ("%f %f", &angle1 , &angle2);
    }
    while((((angle1 <=0) || (angle2 <= 0)) || (angle1 + angle2 >=100)));

    //calculation
     angle3 = 180 - (angle1 + angle2);

    //output
    printf ("angle3 =%.3f \n", angle3);
    return 0;
}