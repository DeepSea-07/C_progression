#include <stdio.h>

int main() {
    int rem , m ,n;
    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);
    while (n != 0) {
        rem = m % n;
        m = n;
        n = rem;
    }
    printf("Greatest common divisor: %d\n", m);
    return 0;
}