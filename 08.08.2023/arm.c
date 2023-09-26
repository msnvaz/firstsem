#include <stdio.h>
int main(){
	int num,sum=0,rem,cube,save;
	printf("Enter a number : ");
	scanf("%d",&num);
	save=num;
	printf("num1 =%d\n",save);
	for(num;num>0;num/=10){
		rem=num%10;
		cube=rem*rem*rem;
		sum=sum+cube;
	}
	if(save==sum){
		printf("%d is a Armstrong Number",save);
	}
	else{
		printf("%d is not a Armstrong Number",save);
		
	}
	return 0;
}
