//For loop to get five numbers and their cubes by prompting the user
#include <stdio.h>
#include <math.h>

int main() {
    int i, j ,cube;
    printf("Enter a number when to start and when to stop:");
    scanf("%d%d",&i,&j);

    for(i ; i <= j ; i ++){
        cube = pow(i,3);
        printf("Number is:%d and cube of the %d is:%d\n",i,i,cube);


    }


    return 0;
}
