// Program to calculate the surface area of a cylinder
#include <stdio.h>
#include <math.h>
int main(){
    const float pi = 3.14;
    float radius , height , surface_area;
    surface_area = (2 * pi * pow(radius,2)) + (2 * pi * radius * height);

    printf("Enter radius:");
    scanf("%f",&radius);

    printf("Enter height:");
    scanf("%f",&height);

    surface_area = (2 * pi * pow(radius,2)) + (2 * pi * radius * height);
    printf("The surface area is %.2f",surface_area);

    return 0;
}
