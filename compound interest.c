//Program to calculate compound interest by prompting for principle amount, rate, number of compounds and total years
#include <stdio.h>
#include <math.h>
int main(){
    double principle_amount , rate , compounds , time , amount , compound_interest;
    amount = principle_amount *  pow((1 + rate / compounds),compounds * time);
    compound_interest = amount - principle_amount;

    printf("Enter the principle_amount:");
    scanf("%lf",&principle_amount);

    printf("Enter the rate:");
    scanf("%lf",&rate);

    printf("Enter the compounds:");
    scanf("%lf",&compounds);

    printf("Enter the time:");
    scanf("%lf",&time);

    amount = principle_amount *  pow((1 + rate / compounds),compounds * time);
    compound_interest = amount - principle_amount;

    printf("The compound interest is %.2lf",compound_interest);

    return 0;
}
