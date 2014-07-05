#include <stdio.h>
#include <stdlib.h>
#define L 6
#define STRMAX 8

void multiplica(int x, int y, int *resultado) {
	int p = 0, q;
	if (x == 0 || y == 0) {
		p = 0;
	} else {
		for (q = 0; q < y; q++) {
			p = p + x;
		}
	}
	*resultado = p;
}
void calculaExponenciacao(int base, int expoente, int *resultado) {
	int e, f = 0, k, total = base;
	if (expoente == 0) {
		f = 1;
	} else {
		e = base;
		for (k = 1; k < expoente; k++) {
			multiplica(e, base, &total);
			e = total;
		}
		f = e;
	}
	*resultado = f;
}
int main(void) {
	int i, a, b, qtd, resultado;
	freopen("e5.txt", "r", stdin);
	freopen("s5.txt", "w", stdout);
	scanf("%d", &qtd);
	for (i = 0; i < qtd; i++) {
		scanf("%d %d", &a, &b);
		calculaExponenciacao(a, b, &resultado);
		printf("%d\n", resultado);
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}

