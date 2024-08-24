//convert celsius of fehrnheit
#include<stdio.h>

int main(){
    printf("Enter temprature in celsius\n");
    int temp ;
    scanf("%d", &temp);

   
    float val = 1.8;

    float result = temp*val;

    float final = result + 32;

    printf("The temp in fehrnheit is %f", final);

    return 0;
}