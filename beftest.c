#include <stdio.h>
#include <string.h>

int main(){
	int i;
	int intID[13];
	char id[13]="200207303077";
		printf("Your NIC is %s",id);
		intID[13]=atoi(id);
		for(i=0;i<11;i++){
			printf("%d",intID[i]);
		}
		
		
}
