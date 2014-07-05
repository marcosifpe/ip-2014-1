#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void ehprimo(unsigned int a, bool *resultado);
void fatorial(unsigned int a, double *resultado);

int main(void) {

	int a = 1, b = 0, i = 0, n = 0;
	bool primo = false;
	double soma = 0, fato = 0;

	freopen("e9.txt", "r", stdin);
	freopen("s9.txt", "w", stdout);

	scanf("%d %d", &a, &b);

	while (a != 0 && b != 0) {
		for (i = b; n < a; i++) {
			ehprimo(i, &primo);

			if (primo) {
				n++;
				fatorial(i, &fato);
				soma += fato;
			}
		}

		printf("%.0lf\n", soma);
		n = 0;
		soma = 0;
		scanf("%d %d", &a, &b);
	}

	fclose(stdin);
	fclose(stdout);

	return 0;
}

void ehprimo(unsigned int a, bool *resultado) {
	int i;
	//float aux = sqrt(a);

	*resultado = true;

	if (a == 1)
		*resultado = false;

	for (i = 2; i < a; i++) {
		if (a % i == 0)
			*resultado = false;
	}
}

void fatorial(unsigned int a, double *resultado) {

	double mult = 1;
	double x;

	if (a == 0)
		*resultado = 1;
	else {
		for (x = 1; x <= a; x++)
			mult = mult * x;

		*resultado = mult;
	}
}
