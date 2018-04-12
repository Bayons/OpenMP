#include<stdio.h>
#include<stdlib.h>
#include<omp.h>

#define SIZE	200000000

int main() {

	int *v = (int *)malloc( SIZE * sizeof(int) );
	int i;
	int suma = 0;

	#pragma omp parallel for shared(v), private(i)
	for ( i=0; i<SIZE; i++ ) v[i] = 0;

	#pragma omp parallel for shared(v), private(i)
	for ( i=0; i<SIZE; i++ ) v[i] = i;

	/* Suma secuencial */
	for ( i=0; i<SIZE; i++ ) suma = ( suma + v[i] ) % 65535;

	printf( "Resultado final: %d\n", suma );

	return 0;
}
