#include <stdio.h>
float base, height, area;

int main()
{
    base = 0.0;
    height = 0.0;
    area = 0.0;
    printf("Enter base of right-angled triangle: ");
    scanf("%f", &base);
    printf("Enter height of right-angled triangle: ");
    scanf("%f", &height);
    area = 0.5 * base * height;
    printf("Area = %f", area);
    return 0;
}