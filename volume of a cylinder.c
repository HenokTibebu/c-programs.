//Program to calculate the volume of a cylinder
#include <stdio.h>
#include <math.h>
int main(){
    const float pi = 3.14;
    float radius, height , volume;
    volume = pi * (pow(radius,2)) * height;

    printf("Enter radius:");
    scanf("%f",&radius);

    printf("Enter height:");
    scanf("%f",&height);

    volume = pi * (pow(radius,2)) * height;
    printf("The volume is %.2f",volume);

    return 0;
}
