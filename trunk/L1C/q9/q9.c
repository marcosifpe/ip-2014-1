#include <stdio.h>
#include <stdlib.h>

double fatorial(unsigned int n) {
	int cont;
	double fat = 1;
	for (cont = 0; cont < n; cont++) {
		fat *= (cont + 1);
	}
	return fat;
}

double calculaPascal(int n, int p) {
	double r;
	r = fatorial(n) / (fatorial(p) * fatorial(n - p));
	return r;
}

int main() {

	freopen("e9.txt", "r", stdin);
	freopen("s9.txt", "w", stdout);

	unsigned int c = 0, i, x;
	double d;
	scanf("%u", &x);

	for (i = 0; i < x; i++) {
		do {
			d = calculaPascal(i, c);
			printf("%.0lf ", d);
			c++;
		} while (c <= i);
		c = 0;
		d = 0;
		printf("\n");
	}

	fclose(stdin);
	fclose(stdout);

	return 0;

}
