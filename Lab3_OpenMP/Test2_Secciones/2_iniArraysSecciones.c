#include<stdio.h>
#include<stdlib.h>
#include<omp.h>

#define SIZE	50000000
#define	SEED	387454

int main() {
	double time = omp_get_wtime();

	double *A = (double *)malloc( SIZE * sizeof(double) );
	double *B = (double *)malloc( SIZE * sizeof(double) );
	double *C = (double *)malloc( SIZE * sizeof(double) );
	int i;

	/* 1. Paralelizar la inicialización con secciones paralelas */
#pragma omp parallel sections
	{

	#pragma omp section	
	for ( i=0; i<SIZE; i++ ) 
		A[i] = i * 25 % 65536 + 33;

	#pragma omp section	
	for ( i=0; i<SIZE; i++ ) 
		B[i] = (i + SIZE) / 2 % 457 - 17;

	#pragma omp section	
	for ( i=0; i<SIZE; i++ ) 
		C[i] = 0;
	}

	/* Suma vectores */
	for (i=0; i<SIZE; i++)
		C[i] = A[i] + B[i];

	time = omp_get_wtime() - time;
	printf("2.Tiempo: %f.\n", time);

	return 0;
}
