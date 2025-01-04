// Function to calculate the sum of numbers from 1 to n using recursion
#include <stdio.h>
int sum(int n) {
    if (n == 0) {
        return 0; 
    } else {
        return n + sum(n - 1); 
    }
}

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d",&n);
    int result;
   result= sum(n);
        printf("Sum of numbers from 1 to %d is: %d\n", n, result);}
    
    
