//Area of a circle function
#include <stdio.h>
#include <math.h>
int area(float pi , int r);
int main(){
    int x , y;
    const float pi = 3.14;
    printf("Input radius:");
    scanf("%d",&y);
    x = area(pi , y);
    printf("The area is %d square cm\n",x);
}

int area(float pi , int r){
    int A;
    A = pi * (pow(r,2));

    return A;
}
