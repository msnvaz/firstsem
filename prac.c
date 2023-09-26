#include <stdio.h>
#include <string.h>
#define CSIZE 2
#define SCORES 3

struct name{
	char name1[20];
	char name2[20];
};

struct student{
	struct name fname;
	float grade[SCORES];
	float avg;
};

    

int main(){
	int i,j;
	
	struct student st[CSIZE];
	
	for (j = 0; j < CSIZE; j++) {
		printf("Enter Student %d Details\n\n",j+1);
		printf("First name : ");
		scanf("%s",st[j].fname.name1);
		printf("Second name : ");
		scanf("%s",st[j].fname.name2);
		for (i = 0; i < SCORES; i++) {
			printf("Enter Grade : ");
			scanf("%f",&st[j].grade[i]);}
	printf("\n");
		}	
		
		for (j = 0; j < CSIZE; j++) {		
		float sum = 0.0;
        for (i = 0; i < SCORES; i++) {
        	sum += st[j].grade[i];}
    
    st[j].avg = sum / SCORES;
//sum and average
				
		printf("\n");
		printf("Average of %s %s",st[j].fname.name1,st[j].fname.name2);
		printf("\n");
		//printf("Second name : %s",st[j].fname.name2);printf("\n");
		printf("Average : %.2f",st[j].avg);
		printf("\n\n");}
		
	
	




}
