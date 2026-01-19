#include <stdio.h>

int main(void){
    float value;

    printf("Enter wind speed(in knots): ");
    scanf("%f",&value);

    if(value < 1)
        printf("Calm\n");
    else if(value <= 3)
        printf("Light air\n");
    else if (value <= 27)
        printf("Breeze\n");
    else if (value <= 47)
        printf("Gale\n");
    else if (value < 63)
        printf("Storm\n");
    else
        printf("Hurricane\n");
    return 0;
}