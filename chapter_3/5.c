#include <stdio.h>

int main(void){
    int n1,n2,n3,n4,m1,m2,m3,m4,o1,o2,o3,o4,p1,p2,p3,p4;

    printf("Enter the number from 1 to 16 in any order: \n");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",&n1,&n2,&n3,&n4,&m1,&m2,&m3,&m4,&o1,&o2,&o3,&o4,&p1,&p2,&p3,&p4);

    printf("\n\n%3d%3d%3d%3d\n%3d%3d%3d%3d\n%3d%3d%3d%3d\n%3d%3d%3d%3d\n",n1,n2,n3,n4,m1,m2,m3,m4,o1,o2,o3,o4,p1,p2,p3,p4);

    printf("\nRow sums : %d %d %d %d\n",(n1+n2+n3+n4),(m1+m2+m3+m4),(o1+o2+o3+o4),(p1+p2+p3+p4));
    printf("Column sums : %d %d %d %d\n",(n1+m1+o1+p1),(n2+m2+o2+p2),(n3+m3+o3+p3),(n4+m4+o4+p4));
    printf("Diagonal Sums : %d %d\n",(n1+m2+o3+p4),(n4+m3+o2+p1));

    return 0;

}