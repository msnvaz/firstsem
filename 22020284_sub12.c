#include<stdio.h>
#include<string.h>


//Q8functions
/*
int factorial(*ptr1){
	return(*ptr1*(*ptr1-1));
}*/





//q7 FUCTIONS
/*int multiplevalues(int *ptr1){
	*ptr1=*ptr1* *ptr1;
}
int multiplevalues2(int *ptr2){
	*ptr2=*ptr2+*ptr2;
}*/






//Q5 functions
/*int compareStrings(const char *str1, const char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return 0; 
        }
        str1++;
        str2++;
    }

    // Both strings have been fully compared
    if (*str1 == '\0' && *str2 == '\0') {
        return 1; 
    } else {
        return 0; 
    }
}*/














int main(){
	
	//Q1
	/*int x,y,sum;
	printf("Enter 2 numbers:\n");
	scanf("%d%d",&x,&y);
	int *ptr1=&x;
	int *ptr2=&y;
	sum=*ptr1+*ptr2;
	printf("Sum is %d",sum);*/
	
	//Q2
	/*int x,y,temp;
	printf("Enter 2 numbers:\n");
	scanf("%d%d",&x,&y);
	int *ptr1=&x;
	int *ptr2=&y;
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
	printf("Swapped numbers are num1=%d num2=%d",*ptr1,*ptr2);*/
	
	
//Q3
    /*int i, x, len;
    int arr1[50] = {5, 4, 3, 6, 8, 78, 54};
    
    printf("Enter a number to search:\n");
    scanf("%d", &x);

    len = sizeof(arr1) / sizeof(arr1[0]);  // Calculate the length of the array

    int found = 0;  // Flag to indicate whether the element is found or not

    for (i = 0; i < len; i++) {
        if (arr1[i] == x) {
            printf("Element found at %d position\n", i);
            found = 1;
            break;  // Once found, no need to continue searching
        }
    }

    if (!found) {
        printf("Element not found\n");
    }

    */

	
	
	
	//Q4
	/*int i,j;
	int matrix1[2][2]={{1,2},{5,6}};
	int matrix2[2][2]={{1,1},{1,1}};
	int sum[2][2];
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			sum[i][j]=matrix1[i][j]+matrix2[i][j];
			printf("%d\t",sum[i][j]);
		}
	}*/
	
	




//Q5
    /*char string1[50];
    char string2[50];

    printf("Enter the first string: ");
    scanf("%s",&string1);

    printf("Enter the second string: ");
    scanf("%s",&string2);

    if (compareStrings(string1, string2)) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }*/
    
    
    
    
//Q6
   /* int arr1[50] = {1, 6, 3, 5, 9}, temp[50];
    int i, j, len;

    len = sizeof(arr1) / sizeof(arr1[0]); 
    int *len1=&len;

    
    for (i = 0; i < len; i++) {
        temp[i] = arr1[i];
    }

    
    for (i = 0; i < (len-1); i++) {
        for (j = 0; j < (len-i-1); j++) {
            if (temp[j] > temp[j + 1]) {
                
                int tmp = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = tmp;
            }
        }
    }

    // Print the sorted array
    printf("Sorted array is: ");
    for (i = 0; i < len; i++) {
        printf("%d ", temp[i]);
    }*/
    
    //Q7
    /*int i=5;
    multiplevalues(&i);
    multiplevalues2(&i);
    printf("%d\n",i);
    printf("%d",i);*/
    
    
    
	//Q8
	/*int num1,*ptr1;
	print("Enter a number:");
	scanf("%d",&num1);
	*ptr1=&num;
	factorial(&num1);*/
	
	return 0;
	
	
}
