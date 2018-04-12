#include<stdio.h>
#include<stdlib.h>
#include<omp.h>

#define SIZE	200000000
#define DIV	65535



int main() {

	double ttime = omp_get_wtime();
	long *v = (long *)malloc( SIZE * sizeof(long) );
	long i;
	long suma = 0;

	#pragma omp parallel for shared(v), private(i)
	for ( i=0; i<SIZE; i++ ) v[i] = 0;

	#pragma omp parallel for shared(v), private(i)
	for ( i=0; i<SIZE; i++ ) v[i] = i;

	/* paralelizacion */
	v[0]= v[0]%DIV;

	#pragma omp parallel for reduction(+:suma)
	for ( i=0; i<SIZE; i++ ) suma = suma + v[i];

	suma = suma % DIV;

	ttime= omp_get_wtime() - ttime;
	printf( "Resultado final: %ld\nTiempo total: %f\n", suma, ttime );

	return 0;
}
