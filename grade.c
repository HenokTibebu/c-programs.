//Grading based on average of three subjects user prompted
#include <stdio.h>
int main(){
    int english, math, kiswahili, average;
    average = (english + math + kiswahili) / 3;

    printf("Enter the marks for English, Math and Kiswahili:");
    scanf("%d%d%d",&english,&math,&kiswahili);
    average = (english + math + kiswahili) / 3;

    if (average >= 70 && average <= 100){
        printf("A");
    }
    else if (average >= 60 && average <= 69){
            printf("B");
    }
    else if (average >= 50 && average <= 59){
            printf("C");
    }
    else if (average >= 40 && average <= 49){
            printf("D");
    }
    else if (average >= 0 && average <= 39){
            printf("E(Fail)");
    }
    else{
        printf("Invalid marks");
    }

    return 0;
}
