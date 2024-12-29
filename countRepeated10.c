#include <stdio.h>

int main() {
    int n, i, j, count;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n], visited[n];
    
    printf("Enter %d numbers: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0; // Initialize all elements as unvisited
    }
    
    printf("\nRepeated numbers and their counts:\n");
    for (i = 0; i < n; i++) {
        if (visited[i] == 1) // Skip if already visited
            continue;
        
        count = 1; // Start count for the current element
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // Mark as visited
            }
        }
        
        if (count > 1) { // Only print if the number is repeated
            printf("Number %d is repeated %d times\n", arr[i], count);
        }
        
    }
     
    return 0;
}
