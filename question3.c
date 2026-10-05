#include <stdio.h>
int main() {
    int present = 0, absent = 0, status;
    for (int i = 1; i <= 15; i++) {
        printf("Student %d (1=Present, 0=Absent): ", i);
        scanf("%d", &status);
        if (status == 1) present++;
        else absent++;
    }
    printf("Total Present = %d\n", present);
    printf("Total Absent = %d", absent);
    return 0;
}