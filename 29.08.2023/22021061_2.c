#include<stdio.h>
#include<string.h>
int main(){

	int x,y,temp;
	printf("Enter 2 numbers : ");
	scanf("%d%d",&x,&y);
	int *ptr1=&x;
	int *ptr2=&y;
	printf("Numbers are \nnumber 1 = %d \nnumber 2 = %d \n\n",*ptr1,*ptr2);
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
	printf("Swapped numbers are \nnumber 1 = %d \nnumber 2 = %d",*ptr1,*ptr2);
}
