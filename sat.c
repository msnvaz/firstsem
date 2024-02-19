#include <stdio.h>
/*int main()
{
    int a = 5, b = 6, c = 10;
    printf("%d\n",a&b);
    printf("%d",a|b);
  */  
    

struct st{
    char name[10];
	int age;
    //char *ptr;
}st1;

union su{
    char name[10];
	int age;
    double ptr;
}su1;

int main(){
	
	struct st *stptr;
	stptr = &st1;
	float x=5.0;
	//int size = sizeof()
    printf("sizeof(int) %d\n", sizeof(int));
    printf("sizeof(st1) %d\n", sizeof((*stptr).age));
    printf("sizeof(su1) %d\n", sizeof(su1));
    printf("sizeof(union su) %d\n", sizeof(union su));
	printf("%f\n",x/2);
	struct st st1={"Sandeep",21};
	//disp(*stptr);
	printf("Name = %s",stptr->name);
}

//void 
//disp(struct st *ptr){
//	printf("Name = %s",ptr->name);
//}
