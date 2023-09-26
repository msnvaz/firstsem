#include<stdio.h>
#include<string.h>
int main(){
    int i, x, length;
    int array[50] = {5, 4, 3, 6, 8, 78, 54};
    
    printf("Enter a number to search : ");
    scanf("%d", &x);

    length = sizeof(array) / sizeof(array[0]); 

    int found = 0;

    for (i = 0; i < length; i++) {
        if (array[i] == x) {
            printf("Element found at %d position\n", i);
            found = 1;
            break; 
        }
    }

    if (!found) {
        printf("Element not found\n");
    }
}

    
