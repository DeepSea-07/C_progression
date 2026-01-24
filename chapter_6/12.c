#include <stdio.h>

int main(void){
    float num;
    long long int fact=1;
    printf("Enter a floating point number: ");
    
    scanf("%f",&num);
    double e;
    e = 1.0;
    
    int j = 1;
    while(1){
        fact = 1;
        int i = 1;
        while(i<=j){
            fact = fact * i;
            i++;
        }
        e=e+(double)(1.0/fact);
        j++;
        if((double)(1.0/fact)<num)
            break;
    }
    printf("e = %lf\n", e);
}