#include <stdio.h>

int main(void){
    int month , date , year , item_number ;
    float unit_price ;

    printf("Enter item number: ");
    scanf(" %d",&item_number);

    printf("Enter unit price: ");
    scanf(" %f",&unit_price);

    printf("Enter purchase date (mm/dd/yyyy) : ");
    scanf("%d / %d / %d",&month,&date,&year);

    printf("Item\t\tUnit\t\tPurchase\t\n\t\tPrice\t\tDate\n%-4d\t\t$%7.2f\t%d/%d/%d\n",item_number,unit_price,month,date,year);

}