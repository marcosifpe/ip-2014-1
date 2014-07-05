#include <stdio.h>
#include <stdlib.h>

double media(unsigned int u[], int m) {
	int k;
	double soma = 0;
	for (k = 0; k < m; k++) {
		soma += (double) u[k];
	}
	return soma / m;
}

unsigned int maior(unsigned int u[], int m) {
	unsigned int k, maior = u[0];
	for (k = 1; k < m; k++) {
		if (u[k] > maior)
			maior = u[k];
	}
	return maior;
}

unsigned int menor(unsigned int u[], int m) {
	unsigned int k, menor = u[0];
	for (k = 1; k < m; k++) {
		if (u[k] < menor)
			menor = u[k];
	}
	return menor;
}

void ordena(unsigned int u[], int m) {
	unsigned i, j, aux;
	for (i = m; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if (u[j] > u[j + 1]) {
				aux = u[j];
				u[j] = u[j + 1];
				u[j + 1] = aux;
			}
		}
	}

}

int main(void) {
	unsigned int i = 0, j, tam = 10, n, *v = (unsigned int*) malloc(
			tam * sizeof(unsigned int));
	freopen("e8.txt", "r", stdin);
	freopen("s8.txt", "w", stdout);
	if (v != NULL) {
		scanf("%u", &n);
		while (n) {
			v[i] = n;
			i++;
			if (i >= tam) {
				tam = tam * 2;
				v = (unsigned int*) realloc(v, tam * sizeof(unsigned int));
			}

			scanf("%u", &n);
		}
		ordena(v, i);
		for (j = 0; j < i; j++) {
			printf("%u ", v[j]);
		}
		printf("\n");
		printf("%.1lf\n", media(v, i));
		printf("%u\n", maior(v, i));
		printf("%u\n", menor(v, i));

	}

	free(v);
	fclose(stdin);
	fclose(stdout);
	return 0;
}

