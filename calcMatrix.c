#include "calcMatrix.h"

void addMatrix(int A[][COLS], int B[][COLS], int C[][COLS])
{
	int i, j;
	
	for (i=0; i<ROWS; i++) {
		for (j=0; j<COLS; j++) {
			C[i][j] = A[i][j] + B[i][j];
		}
	}
	
	return ;
}

void printMatrix(int A[][COLS]){
	
	int i, j;
	
	for (i=0; i<ROWS; i++) {
		for(j=0; j<COLS; j++) {
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	
	return;
}
