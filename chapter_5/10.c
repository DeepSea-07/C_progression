#include <stdio.h>

int main(void){
    float value;

    printf("Enter numerical grades: ");
    scanf("%f",&value);

    if(value < 0.00f || value > 100.00f){
        printf("Invalid input\n");
        return 0;
    }
    
    printf("Letter grade: ");

    if(value < 0.00f || value > 100.00f){
        printf("Invalid input\n");
        return 0;
    }

    if(value < 60.00f)
        printf("F\n");
    else if(value < 70.00f)
        printf("D\n");
    else if (value < 80.00f)
        printf("C\n");
    else if (value < 90.00f)
        printf("B\n");
    else if (value <= 100.00f)
        printf("A\n");
    return 0;
}