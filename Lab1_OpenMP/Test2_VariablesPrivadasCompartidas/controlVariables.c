#include<stdio.h>
/* 1. Include de biblioteca OpenMP */

int main() {

	int v[ 10 ];
	int i;

	/* Inicializar */
	for ( i=0; i<10; i++ ) v[i] = 0;

	/* 2. Directiva de paralelismo: Con vector v compartido */
	/* 3. Dentro de la región paralela: Cada thread escribe la posición
	 * 		de su identificador un 10 + su identificador */
	v[ 0 ] = 10;
	v[ 1 ] = 11;
	/* etc ... (Reescribir en paralelo) */

	/* Escribir */
	for ( i=0; i<10; i++ ) printf( " %d", v[i] );
	printf( "\n" );

	return 0;
}
