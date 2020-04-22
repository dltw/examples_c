#include <stdio.h>
float radius, height, volume;

int main()
{
    radius = 0.0;
    height = 0.0;
    volume = 0.0;
    printf("Enter radius of cone: ");
    scanf("%f", &radius);
    printf("Enter height of cone: ");
    scanf("%f", &height);
    volume = (3.141592 * radius * radius * height) / 3.0;
    printf("Volume = %f", volume);
    return 0;
}