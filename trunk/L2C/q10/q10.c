#include <stdio.h>
#include <stdlib.h>

int** criarMatriz(int linha, int coluna) {
	int i, j, **m = (int**) malloc(linha * sizeof(int*));

	if (m == NULL) {
		printf("Nao foi possivel alocar memoria para a matriz");
		exit(EXIT_FAILURE);
	}

	for (i = 0; i < linha; i++) {
		m[i] = (int*) malloc(coluna * sizeof(int));

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
	int i, j, l, c, **m;

	freopen("e10.txt", "r", stdin);
	freopen("s10.txt", "w", stdout);

	scanf("%d %d", &l, &c);
	m = criarMatriz(l, c);

	for (i = 0; i < l; i++)
		for (j = 0; j < c; j++)
			scanf("%d", &m[i][j]);

	for (i = 0; i < c; i++) {
		for (j = 0; j < l; j++) {
			printf("%d ", m[j][i]);
		}
		printf("\n");
	}

	for (i = 0; i < l; i++)
		free(m[i]);

	free(m);

	fclose(stdin);
	fclose(stdout);

	return 0;
}
