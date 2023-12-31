#include <stdio.h>

void fibonacciUsingLoop(int n) {
    int first = 0, second = 1, next;
    
    printf("Fibonacci series using loop: ");
    for (int i = 1; i <= n; ++i) {
        printf("%d, ", first);
        next = first + second;
        first = second;
        second = next;
    }
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fibonacciUsingLoop(n);
    return 0;
}
