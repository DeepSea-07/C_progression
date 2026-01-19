#include <stdio.h>

int main(void){
    float amount , amount_after_tax ;
    printf("Enter an amount : $");
    scanf("%f",&amount);
    printf("With tax added : $%.2f\n",amount + (5.0/100.0)*amount);
}