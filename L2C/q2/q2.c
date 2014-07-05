#include <stdio.h>
#include <stdlib.h>
#define L 4
void lermatriz(int m[L][L]) {
	int i, j;
	for (i = 0; i < L; i++) {
		for (j = 0; j < L; j++) {
			scanf("%d", &m[i][j]);
		}
	}
}

void testeInca(int n[L][L]) {
	int i, j, k, l, m, control = 0;
	char nome[3];

	scanf("%s", nome);
	lermatriz(n);
	for (i = 0; i < L - 1; i++) {
		if ((n[0][i + 1] - n[0][i]) != 1) {
			control = 1;
		}
	}
	for (j = 0; j < L - 1; j++) {
		if ((n[2][L - 1] - n[1][L - 1]) != 1) {
			control = 1;
		}
	}
	for (k = L - 1; k > 0; k--) {
		if ((n[k][L - 1] - n[k - 1][L - 1]) != 1) {
			control = 1;
		}
	}
	for (l = L - 2; l > 0; l--) {
		if ((n[l][0] - n[l + 1][0]) != 1) {
			control = 1;
		}
	}
	for (m = 0; m < L - 2; m++) {
		if ((n[1][m + 1] - n[1][m]) != 1) {
			control = 1;
		}
	}
	if ((n[2][2] - n[1][2]) != 1) {
		control = 1;
	}
	if ((n[2][1] - n[2][2]) != 1) {
		control = 1;
	}

	if (control != 0) {
		printf("%s: nao inca", nome);
	} else {
		printf("%s: inca", nome);
	}
}

int main(void) {
	int i, num, x[L][L];
	freopen("e2.txt", "r", stdin);
	freopen("s2.txt", "w", stdout);

	scanf("%d", &num);
	for (i = 0; i < num; i++) {
		testeInca(x);
		printf("\n");
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
