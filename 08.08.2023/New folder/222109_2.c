#include "stdio.h"

int IsPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    int i;
    for ( i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    
    return 1;
}

void findPrimesInInterval(int start, int end) {
    printf("Prime numbers between %d and %d are:\n", start, end);
    int i;
    for (i = start; i <= end; i++) {
        if (IsPrime(i)) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int start, end;
    
    printf("Enter the First Value: ");
    scanf("%d", &start);
    
    printf("Enter the Last Value: ");
    scanf("%d", &end);
    
    findPrimesInInterval(start, end);
    
    return 0;
}

