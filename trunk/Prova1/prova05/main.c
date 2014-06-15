#include <stdio.h>

int main(void) {
	int cont = 1, r = 0;
	do {
		r += cont;
		cont += 4;
	} while (cont <= 5);

	printf("%d e %d", r, cont);
	return 0;
}
