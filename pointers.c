#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int summation(int n,float *v){
	int i; float sum = 0.0F;
	for(i = 0;i < n;i++){
		sum += *(v+i);
	}
	return sum;
}
int main(int argc, char *argv[]) {
	int n; int i; float *v; float sum;
	
	scanf("%d",&n);
	v = (float*)malloc(n*sizeof(float));
	
	for(i = 0;i < n;i++){
		scanf("%f",v+i);
	}
	sum = summation(n,v);
	printf("Summation = %.1f media = %.1f\n",sum,sum/n);
	return 0;
}
