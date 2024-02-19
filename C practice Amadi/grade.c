#include <stdio.h>

int getinput();
void printgrade();


int main (){
	
	printgrade(getinput());
	
	return 0;
}

int getinput(){
	int mark;
	printf("Enter the marks :");
	scanf("%d",&mark);
	return mark;
}

void printgrade(int marks){
	if(marks<0 || marks>100)
    {
        printf("X");
    }
    else if(marks<40)
    {
        printf("Grade F");
    }
    else if(marks>=40 && marks<60)
    {
        printf("Grade C");
    }
    else if(marks>=60 && marks<75)
    {
        printf("Grade B");
    }
    else if(marks>=75 && marks<101)
    {
        printf("Grade A");
    }
}
    

