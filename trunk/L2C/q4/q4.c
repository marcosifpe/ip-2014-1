#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define L 6
#define STRMAX 8
void lermatriz(int m[L][L]) {
	int i, j;
	for (i = 0; i < L; i++) {
		for (j = 0; j < L; j++) {
			scanf("%d", &m[i][j]);
		}
	}

}
void lerrota(int v[L]) {
	int k;
	for (k = 0; k < L; k++) {
		scanf("%d", &v[k]);
	}
}
void lerstring(char s[]) {
	scanf("%s", s);

}

void somardistancias(int x[L][L], int y[L]) {
	int i, s, t, soma = 0;
	for (i = 0; i < L - 1; i++) {
		s = y[i];
		t = y[i + 1];
		soma = soma + x[s][t];
	}
	printf("%d ", soma);

}

int main(void) {
	freopen("e4.txt", "r", stdin);
	freopen("s4.txt", "w", stdout);
	int w[L], n[L][L];
	char f[STRMAX];
	lerstring(f);
	lermatriz(n);
	lerstring(f);
	lerrota(w);
	somardistancias(n, w);

	fclose(stdin);
	fclose(stdout);
	return 0;
}

