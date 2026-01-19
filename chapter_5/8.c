#include <stdio.h>

int main(void){
    int ampm = 0;
    int ori_hr , ori_min , ori_time;
    printf("Enter a 24-hour time: ");
    scanf("%d :%d",&ori_hr,&ori_min);

    ori_time = ori_hr*60 + ori_min;

    if (ori_hr > 12){
        if(ori_hr == 24){
            ori_hr=12;
        }
        else{
            ori_hr = ori_hr - 12 ;
        }
        ampm = 1;

    }


    int d1 = 480 , d2 = 583 , d3 = 679 , d4 = 767 , d5 = 840 , d6 = 945 , d7 = 1140 , d8 = 1305;

    printf("Closest departure time is ");

    if(ori_time <= d1 + (d2 - d1)/2){
        printf("8:00 AM, arriving at 10:16 AM\n");
    }
    else if(ori_time <= d2 + (d3 - d2)/2){
        printf("9:43 AM, arriving at 11:52 AM\n");
    }
    else if(ori_time <= d3 + (d4 - d3)/2){
        printf("11:19 AM, arriving at 1:31 PM\n");
    }
    else if(ori_time <= d4 + (d5 - d4)/2){
        printf("12:47 PM, arriving at 3:00 PM\n");
    }
    else if(ori_time <= d5 + (d6 - d5)/2){
        printf("2:00 PM, arriving at 4:08 PM\n");
    }
    else if(ori_time <= d6 + (d7 - d6)/2){
        printf("3:45 PM, arriving at 5:55 PM\n");
    }
    else if(ori_time <= d7 + (d8 - d7)/2){
        printf("7:00 PM, arriving at 9:20 PM\n");
    }
    else if(ori_time <= d8){
        printf("9:45 PM, arriving at 11:58 PM\n");
    }
    else{
        printf("8:00 AM, arriving at 10:16 AM\n");
    }
  
    return 0;
}