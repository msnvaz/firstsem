#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

// Function to check if a number is a strong number
int isStrong(int num) {
    int originalNum = num;
    int sum = 0;
    
    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    
    return sum == originalNum;
}

// Function to find and print strong numbers within an interval
void findStrongNumbersInInterval(int start, int end) {
    printf("Strong numbers between %d and %d are:\n", start, end);
    int i;
    for ( i = start; i <= end; i++) {
        if (isStrong(i)) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int start, end;
    
    printf("Enter the start of the interval: ");
    scanf("%d", &start);
    
    printf("Enter the end of the interval: ");
    scanf("%d", &end);
    
    findStrongNumbersInInterval(start, end);
    
    return 0;
}

