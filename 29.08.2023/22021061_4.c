#include<stdio.h>
#include<string.h>
int main(){
int i,j;
	int matrix1[2][2]={{34,22},{55,-6}};
	int matrix2[2][2]={{98,0},{67,80}};
	int sum[2][2];
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			sum[i][j]=matrix1[i][j]+matrix2[i][j];
			printf("%d\t",sum[i][j]);
		}
	}
}
