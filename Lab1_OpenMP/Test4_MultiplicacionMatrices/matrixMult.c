
#include<stdio.h>
#include<stdlib.h>

#define SIZE	1024
#define SEED	6834723

int main() {
	int i,j,k;

	double A[ SIZE ][ SIZE ];
	double B[ SIZE ][ SIZE ];
	double C[ SIZE ][ SIZE ];

	srand48( SEED );

	for (i=0; i<SIZE; i++)
		for (j=0; j<SIZE; j++) {
			C[i][j] = 0;
			A[i][j] = drand48();
			B[i][j] = drand48();
		}

	for (i=0; i<SIZE; i++)
		for (j=0; j<SIZE; j++) 
			for (k=0; k<SIZE; k=k+1) 
				C[i][j] = C[i][j] + A[i][k] * B[k][j];

	printf("Fin: %lf\n", C[0][0]);
	return 0;

}
