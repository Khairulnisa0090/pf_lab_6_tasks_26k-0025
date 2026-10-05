#include <stdio.h>
int main() {
    int n;
    long long fact1 = 1, fact2 = 1, fact3 = 1, catalan;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 1; i <= 2*n; i++) fact1 *= i; // (2n)!
    for (int i = 1; i <= n+1; i++) fact2 *= i; // (n+1)!
    for (int i = 1; i <= n; i++) fact3 *= i; // n!
    catalan = fact1 / (fact2 * fact3);
    printf("Catalan number C(%d) = %lld", n, catalan);
    return 0;
}