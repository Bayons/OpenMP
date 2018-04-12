#include<stdio.h>
#include<omp.h>

int main() {

	#pragma omp parallel
	{
		int id = omp_get_thread_num(), th = omp_get_num_threads();
		printf("Hola mundo. Hilo %d de %d.\n", id, th);
	}
	return 0;
}
