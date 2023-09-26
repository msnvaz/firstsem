/*
#include <stdio.h>

struct Person{
	char name[20];
	int age;
	double weight;
};


int main(){
	struct Person person1={"Amal",45,45.5};
	print_details(person1);
	return 0;
}

print_details(struct Person prs){
	printf("Name : %s\n",prs.name);
	printf("Age : %d\n",prs.age);
	printf("Weight : %.1f\n",prs.weight);
}




#include <stdio.h>

struct Person{
	char name[20];
	int age;
	double weight;};
	
int main(){
	struct Person person1;
	struct Person *prsPtr;
	prsPtr = &person1;
	printf("Enter Name : ");
	scanf("%s",&(*prsPtr).name);
	printf("Enter Age : ");
	scanf("%d",&prsPtr->age);
	printf("Enter Weight : ");
	scanf("%lf",&prsPtr->weight);
	prsPtr = &person1;
	printf("\n");
	print_details(*prsPtr);
	return 0;
}

print_details(struct Person *prs){
	printf("Name : %s\n",prs->name);
	printf("Age : %d\n",prs->age);
	printf("Weight : %.1f\n",(*prs).weight);
}
*/
#include <stdio.h>

struct Rectangle {
	float length;
	float width;
};

int main(){
	struct Rectangle rect;
	struct Rectangle *rectPtr;
	rectPtr=&rect;
	
	printf("Enter Length : ");
	scanf("%f",&(*rectPtr).length);
	printf("\n");
	printf("Enter Width : ");
	scanf("%f",&(rectPtr->width));
	printf("\n");
	calculateArea(rectPtr);
	
	
}

int calculateArea(struct Rectangle *rect){
	float area;
	area = (rect->length * rect->width);
	printf("Area = %.2f",area);
}













