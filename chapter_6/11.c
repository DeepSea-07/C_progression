#include <stdio.h>

int main(void){
    int num;
    long long int fact=1;
    printf("Enter an integer: ");
    
    scanf("%d",&num);
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
        if(j>num)
            break;
    }
    printf("e = %lf\n", e);
}