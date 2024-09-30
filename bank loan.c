//Bank loan program
#include <stdio.h>
int main(){
    int age , income;
    printf("Enter your age and income:");
    scanf("%d%d",&age,&income);
    if(age >= 21 && income >= 21000){
        printf("Congratulations you qualify for a loan");
    }
    else{
        printf("Unfortunately we are unable to offer you a loan at this time");
    }

    return 0;
}
