#include <stdio.h>

int main(void){
    int ampm = 0;
    int ori_hr , ori_min;
    printf("Enter a 24-hour time: ");
    scanf("%d :%d",&ori_hr,&ori_min);

    if (ori_hr > 12){
        if(ori_hr == 24){
            ori_hr=12;
        }
        else{
            ori_hr = ori_hr - 12 ;
        }
        ampm = 1;

    }
    printf("Equivalent 12-hour time: %d:%d ",ori_hr,ori_min);

    (ampm==1)?printf("PM\n"):printf("AM\n");
    return 0;
}