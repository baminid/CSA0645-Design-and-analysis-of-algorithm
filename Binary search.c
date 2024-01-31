#include <stdio.h>
#include <stdbool.h>

int main() {
    int m, n = 0, s, a[20], temp, i, j;
    
    printf("Enter the number of elements (up to 20): ");
    if (scanf("%d", &s) != 1 || s <= 0 || s > 20) {
        printf("Invalid input for the number of elements.\n");
        return 1;
    }
    printf("Enter the key element: ");
    if (scanf("%d", &m) != 1) {
        printf("Invalid input for the  element.\n");
        return 1;
    }
    printf("Enter the array elements: ");
    for (i = 0; i < s; i++) {
        if (scanf("%d", &a[i]) != 1) {
            printf("Invalid input for array element at index %d.\n", i);
            return 1;
        }
    }
    for (i = 0; i < s; i++) {
        for (j = i + 1; j < s; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i < s; i++) 
	{
        if (a[i] == m)
		{
            n = 1;
            printf(" found at position a[%d]\n", i);
            break;
        }
    }
    if (n == 1) 
	{
        printf("Successful.\n");
    } 
	else 
	{
        printf(" not found.\n");
    }
    return 0;
}

