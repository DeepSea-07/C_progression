#include <stdio.h>

int main(void){
    int digit , o1,o2,o3,o4,o5;
    printf("Enter a number between 0 and 32767 : ");
    scanf("%d",&digit); 

    o1 = digit % 8;
    digit= digit/8;

    o2 = digit % 8;
    digit= digit/8;

    o3 = digit % 8;
    digit= digit/8;

    o4 = digit % 8;
    digit= digit/8;

    o5 = digit % 8;
    digit= digit/8;

    printf("In Octal, Your number is: %1d%1d%1d%1d%1d\n",o5,o4,o3,o2,o1);

    return 0;
}