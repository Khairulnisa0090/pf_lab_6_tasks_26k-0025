#include <stdio.h>
int main() {
    int num, even = 0, odd = 0, digit;
    printf("Enter reading: ");
    scanf("%d", &num);
    while (num > 0) {
        digit = num % 10;
        if (digit % 2 == 0) even++;
        else odd++;
        num = num / 10;
    }
    printf("Even digits = %d\nOdd digits = %d", even, odd);
    return 0;
}