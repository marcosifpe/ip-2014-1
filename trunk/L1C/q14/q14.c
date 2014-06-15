/*
 * q14.c
 *
 *  Created on: 31/05/2013
 *      Author: masc
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define T 20

void bolha(int vetor[], int tamanho) {
	int aux, i, j;

	for (j = tamanho - 1; j >= 1; j--) {
		for (i = 0; i < j; i++) {
			if (vetor[i] > vetor[i + 1]) {
				aux = vetor[i];
				vetor[i] = vetor[i + 1];
				vetor[i + 1] = aux;
			}
		}
	}
}

int main(void) {
	int v[T], i;

	freopen("e14.txt", "r", stdin);
	freopen("s14.txt", "w", stdout);

	for (i = 0; i < T; ++i) {
		scanf("%d", &v[i]);
	}

	bolha(v, T);

	for (i = 0; i < T; ++i) {
		printf("%d ", v[i]);
	}

	printf("\n");

	fclose(stdin);
	fclose(stdout);
	return 0;
}

