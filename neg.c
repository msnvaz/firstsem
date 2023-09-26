#include <stdio.h>

	int main() {
	int x,y,z;
	y=0;z=0;
	do{
		printf("Enter a number : ");
		scanf("%d",&x);
		y++;
		z=z+x;
}
	while(x>0);
	z=z-x;
	printf("%d\n",z);
return 0;
}
 
