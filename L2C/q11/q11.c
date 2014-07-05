#include <stdio.h>
#include <stdlib.h>

int** criarMatriz(int linha, int coluna) {
	int i, j, **m = (int**) calloc(linha, sizeof(int*));

	if (m == NULL) {
		printf("Nao foi possivel alocar memoria para a matriz");
		exit(EXIT_FAILURE);
	}

	for (i = 0; i < linha; i++) {
		m[i] = (int*) calloc(coluna, sizeof(int));

		if (m[i] == NULL) {
			printf("Nao foi possivel alocar memoria para a matriz");
			for (j = 0; j < i; j++)
				free(m[j]);

			free(m);
			exit(EXIT_FAILURE);
		}
	}
	return m;
}

int main(void) {
	int i, j, n, **m;

	freopen("e11.txt", "r", stdin);
	freopen("s11.txt", "w", stdout);

	scanf("%d", &n);
	m = criarMatriz(n, n);

	for (i = 0; i < n; ++i) {
		for (j = 0; j < n; ++j) {
			m[i][j] = (i + 1) * (j + 1);
		}
	}

	for (i = 0; i < n; ++i) {
		for (j = 0; j < n; ++j) {
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < n; i++)
		realloc(m[i], 0);

	realloc(m, 0);

	fclose(stdin);
	fclose(stdout);

	return 0;
}
