//Program illustrating C variables and data types
//line 7 is an array
#include <stdio.h>
int main(){
    char a = 'K';//%c
    char name[] = "Henok";//%s
    int age = 10;//%d
    float area = 20.5;//%f
    double salary = 2000.50;//%lf

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
