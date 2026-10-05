#include <stdio.h>
int main() {
    int arr[10], i, largest, smallest, search, found = -1, insertNum, insertIndex, deleteIndex;
    for (i = 0; i < 8; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Array: ");
    for (i = 0; i < 8; i++) printf("%d ", arr[i]);
    printf("\n");
    largest = smallest = arr[0];
    for (i = 1; i < 8; i++) {
        if (arr[i] > largest) largest = arr[i];
        if (arr[i] < smallest) smallest = arr[i];
    }
    printf("Largest = %d, Smallest = %d\n", largest, smallest);
    printf("Enter number to search: ");
    scanf("%d", &search);
    for (i = 0; i < 8; i++) if (arr[i] == search) found = i;
    if (found!= -1) printf("Found at index %d\n", found);
    else printf("Not found\n");
    printf("Enter number and index to insert: ");
    scanf("%d %d", &insertNum, &insertIndex);
    for (i = 8; i > insertIndex; i--) arr[i] = arr[i-1];
    arr[insertIndex] = insertNum;
    printf("After insert: ");
    for (i = 0; i < 9; i++) printf("%d ", arr[i]);
    printf("\n");
    printf("Enter index to delete: ");
    scanf("%d", &deleteIndex);
    for (i = deleteIndex; i < 8; i++) arr[i] = arr[i+1];
    printf("Final array: ");
    for (i = 0; i < 8; i++) printf("%d ", arr[i]);
    return 0;
}