#include <stdio.h>
#include <stdlib.h>

float summation(int n, int m, float **mat){
	int i; int j; float sum = 0.0F;
	for(i = 0;i < m;i++){
		for(j = 0;j < n;j++){
			sum += mat[i][j];
		}
	}
	return sum;
}
int main(){
	int i;int j; int n; int m;float quant = 0; float sum;
	
	scanf("%d",&m);
	scanf("%d",&n);
	
	float **mat = (float**)malloc(m*sizeof(float*));
	for(i = 0;i < m;i++){
		mat[i] = (float*)malloc(n*sizeof(float));
	}
	
	for(i = 0;i < m;i++){
		for(j = 0;j < n;j++){
			scanf("%f",mat[i][j]);
			quant++;
		}
	}
	sum = summation(m,n,mat);
	printf("Summatio = %.1f - media = %.1f",sum,sum/quant);
	
//	for(i = 0;i < n;i++){
//		free(mat[i]);
//		exit(1);
//	}
//	free(mat);
	
	return 0;
	
}
