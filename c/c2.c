#include <stdio.h>

int fibonacci() {
    static int first = 0, second = 1, next;
    int result = first;
    
    next = first + second;
    first = second;
    second = next;
    
    return result;
}

void printFibonacciSeries(int n) {
    printf("Fibonacci series using function without argument and return value: ");
    for (int i = 0; i < n; ++i) {
        printf("%d, ", fibonacci());
    }
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printFibonacciSeries(n);
    return 0;
}
