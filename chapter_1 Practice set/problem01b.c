//calculate the area of rectange by taking values
#include<stdio.h>

int main(){
    printf("Enter Length\n");
    int l ;
    scanf("%d", &l);
    printf("Enter Breadth\n");
    int b ;
    scanf("%d", &b);
    
    int result = l*b;

    printf("The area of Rectangle is %d", result);

    return 0;
}