#include <stdio.h>
#include <stdlib.h>
#define L 5

void ler(int v[L]) {
	int i;
	for (i = 0; i < L; i++) {
		scanf("%d", &v[i]);
	}

}

void ordenar(int v[L]) {
	int a, k, l;
	for (k = 0; k < L; k++) {
		for (l = k + 1; l < L; l++) {
			if (v[k] > v[l]) {
				a = v[k];
				v[k] = v[l];
				v[l] = a;
			}
		}
	}
}

void popularMatriz(int m[L][L], int v[L], int i) {
	int a;
	for (a = 0; a < L; a++) {
		m[a][i] = v[a];
	}
}

void imprimirmatriz(int m[L][L]) {
	int g, h;
	for (h = 0; h < L; h++) {
		for (g = 0; g < L; g++) {
			if (g < L - 1) {
				printf("%d, ", m[g][h]);
			} else {
				printf("%d", m[g][h]);
			}
		}
		printf("\n");
	}
}
int main(void) {
	freopen("e6.txt", "r", stdin);
	freopen("s6.txt", "w", stdout);
	int j, x[L], n[L][L];
	for (j = 0; j < L; j++) {
		ler(x);
		ordenar(x);
		popularMatriz(n, x, j);
	}
	imprimirmatriz(n);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
