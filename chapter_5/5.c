#include <stdio.h>

int main(void){
    float value , commission;

    printf("Enter income: ");
    scanf("%f",&value);
    

    if(value <= 750.00f)
        commission = .01f * value;
    else if(value < 2250.00f)
        commission = 7.50f + .02f * value ;
    else if (value < 3750.00f)
        commission = 37.50f + (3.00f/100.00f) * value ;
    else if (value < 5250.00f)
        commission = 82.50f + (4.00f/100.00f) * value ;
    else if (value < 7000.00f)
        commission = 142.50f + (5.00f/100.00f) * value;
    else
        commission = 230.00f + (6.00f/100.00f) * value ;
 
    printf("Tax: $%.2f\n", commission);

    return 0;
}