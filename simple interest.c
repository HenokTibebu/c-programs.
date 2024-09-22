// Program to calculate simple interest by accepting principle amount, time and rate
#include <stdio.h>
int main(){
    int principle_amount , time , rate , simple_interest ;
    simple_interest = (principle_amount * time * rate) / 100;

    printf("Enter the principle_amount:");
    scanf("%d",&principle_amount);

    printf("Enter the time:");
    scanf("%d",&time);

    printf("Enter the rate:");
    scanf("%d",&rate);

    simple_interest = (principle_amount * time * rate) / 100;
    printf("The simple interest is %d",simple_interest);

    return 0;
}
