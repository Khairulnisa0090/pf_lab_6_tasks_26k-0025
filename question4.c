#include <stdio.h>
int main() {
    int num, original, rev = 0, digit;
    printf("Enter book code: ");
    scanf("%d", &num);
    original = num;
    while (num > 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    if (original == rev)
        printf("Valid - Palindrome");
    else
        printf("Invalid - Not Palindrome");
    return 0;
}