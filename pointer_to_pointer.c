#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int value = 100;
	int *ptr;
	int **pptr;
	
	ptr = &value;
	pptr = &ptr;
	
	printf("Ptr address = %x",&ptr);
	printf("Pptr address = %x",&pptr);
	
	printf("ptr value = %d",*ptr);
	printf("pptr value = %d",*pptr);
	
	return 0;
}
