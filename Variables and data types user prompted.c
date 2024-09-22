//Program illustrating C variables by prompting the user
#include<stdio.h>
int main(){
    char a ;//%c
    char name[10];//%s
    int age ;//%d
    float area;//%f
    double salary;//%lf

    printf("Enter a character:");
    scanf("%c",&a);

    printf("Enter the name:");
    scanf("%s",&name);

    printf("Enter the age:");
    scanf("%d",&age);

    printf("Enter the area:");
    scanf("%f",&area);

    printf("Enter the salary:");
    scanf("%lf",&salary);
    printf(" \n");

    printf("The character is %c\n",a);
    printf(" \n");
    printf("The name is %s\n",name);
    printf(" \n");
    printf("The age is %d\n",age);
    printf(" \n");
    printf("The area is %.2f\n",area);
    printf(" \n");
    printf("The salary is %.2lf\n",salary);

    return 0;
}
