#include<stdio.h>
#include<string.h>

int main(){
int compare;
char str1[50];
    char str2[50];

    printf("Enter the first string: ");
    scanf("%s",&str1);

    printf("Enter the second string: ");
    scanf("%s",&str2);

    compare=strcmp(str1,str2);
	      if(compare==0){
	  printf("The 2 strings are equal.\n");}
    else {
        printf("The 2 strings are not equal.\n");}
    
}
