#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n); // Read number of elements
    int arr[100]; // Declare array

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read input elements
    }

    scanf("%d", &k); // Read rotation count
    k = k % n; // Handle cases where k > n

    // Create a temporary array to store rotated elements
    int temp[100];

    // Copy the last k elements to the beginning of temp
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Copy the remaining elements
    for (int i = k; i < n; i++) {
        temp[i] = arr[i - k];
    }

    // Copy temp back to arr
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    // Print the rotated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
