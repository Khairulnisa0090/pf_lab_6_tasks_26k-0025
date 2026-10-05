#include <stdio.h>
int main() {
    char word[100];
    int len = 0, vowels = 0, consonants = 0, isPalindrome = 1;
    printf("Enter word: ");
    scanf("%s", word);
    printf("Original word: %s\n", word);
    while (word[len]!= '\0') len++;
    printf("Length = %d\n", len);
    printf("Reversed: ");
    for (int i = len-1; i >= 0; i--) printf("%c", word[i]);
    printf("\n");
    for (int i = 0; i < len/2; i++)
        if (word[i]!= word[len-1-i]) isPalindrome = 0;
    if (isPalindrome) printf("Palindrome\n");
    else printf("Not Palindrome\n");
    for (int i = 0; i < len; i++) {
        char c = word[i];
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            vowels++;
        else consonants++;
    }
    printf("Vowels = %d\nConsonants = %d", vowels, consonants);
    return 0;
}