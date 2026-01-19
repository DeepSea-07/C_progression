#include <stdio.h>

int main(void){
    int entered_number,digit;
    printf("Enter a number :" );
    scanf("%d",&entered_number);

    if(0<entered_number && entered_number <10){
        digit = 1;
    }
    else if (entered_number <100)
    {
        digit = 2;
    }
    else if (entered_number <1000)
    {
        digit = 3;
    }
    else if (entered_number <10000)
    {
        digit = 4;
    }

    printf("The number %d has %d digits \n",entered_number,digit);
    
}