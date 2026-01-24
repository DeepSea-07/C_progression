#include <stdio.h>

int main() {
    int rem ,ori_m,ori_n, m ,n;
    printf("Enter a fraction: ");
    scanf("%d /%d", &ori_m, &ori_n);
    m = ori_m;
    n = ori_n;
    while (n != 0) {
        rem = m % n;
        m = n;
        n = rem;
    }
    printf("In lowest terms: %d/%d\n",ori_m/m, ori_n/m);
    return 0;
}