#include <stdio.h>

// Function declaration
int isPrime(int num, int i);

// Function to check if a number is prime recursively
int isPrime(int num, int i) {
    // Base cases
    if (num <= 1) {
        return 0; // Not prime
    }
    if (i == 1) {
        return 1; // prime
    }
    
    if (num % i == 0) {
        return 0; //not prime
    }
    
    return isPrime(num, i - 1);
}

int main() {
    int number = 4;
    
    if (isPrime(number, number / 2) == 1) {
        printf("%d is prime.\n", number);
    } else {
        printf("%d is not prime.\n", number);
    }
    
    return 0;
}

