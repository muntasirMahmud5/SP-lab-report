#include <stdio.h>
//Create a C program that sorts an array of integers entered by the user using
//the bubble sort algorithm and displays the sorted array

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
       
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
              
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
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

    
    bubbleSort(arr, n);

    printf("Sorted array:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

