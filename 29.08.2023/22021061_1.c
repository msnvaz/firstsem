#include<stdio.h>
#include<string.h>
int main(){

int x,y,sum;
	printf("Enter 2 numbers : ");
	scanf("%d%d",&x,&y);
	int *ptr1=&x;
	int *ptr2=&y;
	sum=*ptr1+*ptr2;
	printf("Sum of 2 numbers = %d",sum);
}
	
	
