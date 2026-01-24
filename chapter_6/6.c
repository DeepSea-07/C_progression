#include <stdio.h>

int main() {
    int number,i=1;
    printf("Enter a number: ");
    scanf("%d", &number);
    while (1) {
        if(i%2==0){
            printf("%d\n",i*i);
            i++;
        }
        else{
            i++;
        }

        if(i*i>number){
            break;
        }
        
    }
    printf("\n");
    return 0;
}