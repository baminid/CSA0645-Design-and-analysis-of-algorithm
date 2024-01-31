#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> // for malloc and free

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    while (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer: ");
        while (getchar() != '\n');
    }

    // Dynamically allocate memory for the array
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        while (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Please enter an integer: ");
            while (getchar() != '\n');
        }
    }

    int key;
    printf("Enter the key element to search: ");
    while (scanf("%d", &key) != 1) {
        printf("Invalid input. Please enter an integer: ");
        while (getchar() != '\n');
    }

    int position = linearSearch(arr, n, key);
    if (position != -1) {
        printf("Element found in position %d\n", position);
    } else {
        printf("Element not found.\n");
    }

    // Free dynamically allocated memory
    free(arr);

    return 0;
}
