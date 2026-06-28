//leaders in an array
#include <stdio.h>

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2,6,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j;
    // Loop through each element
    for ( i = 0; i < n; i++) {
        
        // Check all elements to the right
        for ( j = i + 1; j < n; j++) {
            if (arr[i] <= arr[j]) {
                break; 
            }
        }

        
        if (j == n) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
