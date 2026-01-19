#include <stdio.h>

int main(void){
    int first , second , third , fourth  ,max1 , max2 ,min1 ,min2 ;

    printf("Enter four integers: ");
    scanf("%d %d %d %d",&first,&second,&third,&fourth);

    if(first>=second){
        max1 = first;
        min1 = second;
    }
    else{
        max1 = second;
        min1 = first ; 
    }
    if(third >= fourth){
        max2 = third;
        min2 = fourth;
    }
    else{
        max2 = fourth;
        min2 = third;
    }
    printf("Largest: %d\n",(max1>=max2)?max1:max2 );
    printf("Smallest: %d\n",(min1>=min2)?min2:min1 );

    return 0;
}    