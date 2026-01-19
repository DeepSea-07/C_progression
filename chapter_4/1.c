#include <stdio.h>

int main(void){
    int first_digit , second_digit;
    printf("Enter a two digit number : ");
    scanf("%1d%1d",&first_digit,&second_digit);
    printf("The reversal is : %d%d\n",second_digit,first_digit);
}