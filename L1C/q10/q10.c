#include <stdio.h>
#include <stdlib.h>

int main() {

	freopen("e10.txt", "r", stdin);
	freopen("s10.txt", "w", stdout);

	int n, decont, cont = 1, x = 0;

	scanf("%d", &n);
	while (n > 0) {
		do {
			x += cont;
			cont += 2;
		} while (x < n);

		if (x == n) {
			printf("%d=", n);
			decont = 1;
			while (cont > 3) {
				printf("%d+", decont);
				decont += 2;
				cont -= 2;
			}
			printf("%d\n", decont);
		} else
			printf("imperfeito\n");

		cont = 1;
		decont = 1;
		x = 0;
		scanf("%d", &n);
	}

	fclose(stdin);
	fclose(stdout);
	return 0;
}
