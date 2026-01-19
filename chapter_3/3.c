#include <stdio.h>

int main(void){
    int prefix , identifier , publisher_code , item_number , check_digit;

    printf("Enter ISBN: ");
    scanf("%d -%d -%d -%d -%d",&prefix,&identifier,&publisher_code,&item_number,&check_digit);

    printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n",prefix,identifier,publisher_code,item_number,check_digit);
    return 0;
}