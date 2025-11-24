#include <stdio.h>

int main() {
    int arr[5];
    int n = 5; // The correct size of the array
    int i, j, temp;

    // 1. Array Input (CORRECTED)
    printf("Enter the %d elements of the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        // Correctly read element into array[i]
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Exiting.\n");
            return 1;
        }
    }

    // 2. Sorting (Bubble Sort)
    // The inner loops run up to 'n - i - 1' to avoid comparing already sorted elements
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nSorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 3. Binary Search (CORRECTED 'n' usage)
    int key, low = 0, high = n - 1, mid;
    int found = 0;

    printf("Enter the element to search: ");
    if (scanf("%d", &key) != 1) {
        printf("Invalid input. Exiting.\n");
        return 1;
    }

    while (low <= high) {
        mid = (low + high) / 2; // Calculate the middle index
        if (arr[mid] == key) {
            printf("Element %d found at position %d\n", key, mid + 1);
            found = 1;
            break;
        } else if (key < arr[mid]) {
            high = mid - 1; // Search the lower half
        } else {
            low = mid + 1; // Search the upper half
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
