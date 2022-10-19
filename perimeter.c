#include <stdio.h>
int main(void)

{
    float l,b,perimeter;
    printf("enter the lenght and breath of the rectangle =\n");
    scanf("%f %f",&l,&b);
    perimeter = 2* (l + b);
    printf("perimeter of the rectangle = %.3f \n",perimeter);
    return 0;
}
