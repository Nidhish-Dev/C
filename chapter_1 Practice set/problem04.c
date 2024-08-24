#include<stdio.h>

int main(){

    printf("Enter Principal\n");
    int p = scanf("%d", &p);
    
    printf("Enter Rate of Interest\n");
    int r = scanf("%d", &r);

    printf("Enter Time duration\n");
    int t = scanf("%d", &t);

    float res = p*r*t;

    float final = res/100;

    printf("%f", final);

    return 0;
}