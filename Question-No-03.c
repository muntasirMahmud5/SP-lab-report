#include <stdio.h>
//Write a C program that takes an integer input 'n' and prints the Fibonacci
// sequence up to the 'n'-th term.

int main() {
    int i, n;
    int t1 = 0, t2 = 1; 
    int nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    
    printf("Fibonacci Series: %d, %d, ", t1, t2);

    for (i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}
