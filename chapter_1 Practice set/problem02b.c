//calculate the volume of cylinder by taking values
#include<stdio.h>

int main(){
    printf("Enter radius\n");
    int r ;
    scanf("%d", &r);

    printf("Enter height\n");
    int h ;
    scanf("%d", &h);

    float pi = 3.14;

    float result = r*r*h*pi;

    printf("The area of Circle is %f", result);

    return 0;
}