#include <stdio.h>

int main(void){
    int digit ,first_digit , second_digit ,third_digit;
    printf("Enter a three digit number : ");
    scanf("%d",&digit);
    third_digit = digit % 10 ;
    digit = digit /10 ;
    second_digit = digit % 10 ;
    first_digit = digit/10; 
    printf("The reversal is : %d%d%d\n",third_digit,second_digit,first_digit);
}