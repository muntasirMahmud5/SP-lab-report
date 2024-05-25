#include <stdio.h>
//Develop a C program that searches for a given integer element in an array
//entered by the user using linear search.

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int n; 
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n]; 
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    int target; 
    printf("Enter the integer to search for: ");
    scanf("%d", &target);

    int result = linearSearch(arr, n, target);
    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
