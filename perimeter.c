#include <stdio.h>
int main()
{
    float l, b, perimeter, area;

    printf("enter value of length:");
    scanf("%f", &l);

    printf("enter value of breadth:");
    scanf("%f ", &b);

    perimeter = 2 * (l + b);
    printf("perimeter of rectangle is:%f\n", perimeter);

    area = l * b;
    printf("area of rectangle is : %f\n", area);
    
    return 0;
}
