#include <stdio.h>

int main(void){
    float RADIUS ;
    printf("Enter the radius of the sphere :");
    scanf("%f",&RADIUS);
    float v = (4.0f/3.0f) * 3.14 * RADIUS * RADIUS ;
    printf("Volume is : %.2f\n",v);
}