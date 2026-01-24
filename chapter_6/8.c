#include <stdio.h>

int main() {
    int i=1,number,gap,week=0;
    printf("Enter number of days in a month: ");
    scanf("%d", &number);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &gap);
    printf("\n");
    int j = 1;
    while (j < gap)
        {
            printf("\t");
            j++;
        }

    while (i <= number) {
        
        printf("%d\t", i);
        if ((i + gap - 1) % 7 == 0) {
            printf("\n");
        }
        i++;
    }
    printf("\n");
    return 0;
}