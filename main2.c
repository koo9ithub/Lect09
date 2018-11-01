#include <stdio.h>
#include <stdlib.h>

#define ARRAY	5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	int array[ARRAY];
	
	printf("input 5 numbers: ");
	for (i=0; i<ARRAY; i++) {
		scanf("%i", &array[i]);
	}
	
	for (i=0; i<ARRAY; i++) {
		printf("%i ", array[i]);
	}
	
	
	return 0;
}
