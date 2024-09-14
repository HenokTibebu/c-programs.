// program to find area of a rectangle l by w where the user inputs l and w
#include <stdio.h>
int main(){
    int l , w , area;
    area = l * w;

    printf("Enter length l :");
    scanf("%d",&l);

    printf("Enter width w:");
    scanf("%d",&w);
    area = l * w;

    printf("The area of the rectangle is %d",area);
    return 0;
    }
