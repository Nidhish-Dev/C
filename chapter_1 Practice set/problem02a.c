//calculate the area of circle by taking values
#include<stdio.h>

int main(){
    printf("Enter radius\n");
    int r ;
    scanf("%d", &r);

    int result = r*r*3.14;

    printf("The area of Circle is %d", result);

    return 0;
}