#include <stdio.h>

int main() {
    float input_number,largest_number=0.0f ;
    while (1)
    {
        printf("Enter a number: ");
        scanf("%f", &input_number);
        if (input_number == 0) break;
        largest_number = (input_number > largest_number) ? input_number : largest_number;
    }
    printf("The largest number entered was %f\n", largest_number);
    

    return 0;
}