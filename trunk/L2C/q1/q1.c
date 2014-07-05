#include <stdio.h>
#include <stdlib.h>
void somarmatrizes(int a[3][3], int b[3][3]) {
	int w, x, y, z, c[3][3];
	for (w = 0; w < 3; w++) {
		for (x = 0; x < 3; x++) {
			c[w][x] = a[w][x] + b[w][x];
		}
	}
	for (y = 0; y < 3; y++) {
		for (z = 0; z < 3; z++) {
			printf("%d ", c[y][z]);
		}
		printf("\n");
	}
}

int main(void) {
	int i, j, k, l, matriza[3][3], matrizb[3][3];
	freopen("e1.txt", "r", stdin);
	freopen("s1.txt", "w", stdout);
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &matriza[i][j]);
		}
	}
	for (k = 0; k < 3; k++) {
		for (l = 0; l < 3; l++) {
			scanf("%d", &matrizb[k][l]);
		}
	}
	somarmatrizes(matriza, matrizb);

	fclose(stdin);
	fclose(stdout);
	return 0;
}
