//Cfunctions
#include <stdio.h>
#include <math.h>

int sum(int x, int y);
float divide(float a, float b);

int main(){
    int x,a,b,z;
    float y;
    printf("Enter two values:");
    scanf("%d%d",&a,&b);
    x = sum(a,b);//function calling
    z = sum(10,20);//function calling
    y = divide(a,b);//function calling
    printf("The sum is %d\n",x);
    printf("The 2nd sum is %d\n",z);
    printf("The division is %.2f\n",y);
    return 0;
}
//function definition
int sum(int x, int y){
    int z;
    z = x+y;
    return z;
}
//function definition
float divide(float a, float b){
    float c;
    c = a/b;
    return c;
}