#include <stdio.h>
#include <stdlib.h>

unsigned int calculaDia(unsigned int dia, unsigned int mes) {
	switch (mes) {
	case 1:
		break;
	case 2:
		dia += 31;
		break;
	case 3:
		dia += (31 + 28);
		break;
	case 4:
		dia += (31 + 28 + 31);
		break;
	case 5:
		dia += (31 + 28 + 31 + 30);
		break;
	case 6:
		dia += (31 + 28 + 31 + 30 + 31);
		break;
	case 7:
		dia += (31 + 28 + 31 + 30 + 31 + 30);
		break;
	case 8:
		dia += (31 + 28 + 31 + 30 + 31 + 30 + 31);
		break;
	case 9:
		dia += (31 + 28 + 31 + 30 + 31 + 30 + 31 + 31);
		break;
	case 10:
		dia += (31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30);
		break;
	case 11:
		dia += (31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31);
		break;
	case 12:
		dia += (31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30);
		break;
	}
	dia = (dia % 7);
	if (dia == 0)
		return 7;
	return dia;
}

void imprimeDia(unsigned int diaDaSemana) {
	switch (diaDaSemana) {
	case 1:
		printf("domingo\n");
		break;
	case 2:
		printf("segunda feira\n");
		break;
	case 3:
		printf("terca feira\n");
		break;
	case 4:
		printf("quarta feira\n");
		break;
	case 5:
		printf("quinta feira\n");
		break;
	case 6:
		printf("sexta feira\n");
		break;
	case 7:
		printf("sabado\n");
		break;
	}
}

int main() {

	freopen("e12.txt", "r", stdin);
	freopen("s12.txt", "w", stdout);

	unsigned int p, d, m;

	scanf("%u", &p);
	scanf("%u%u", &d, &m);

	while (d > 0 || m > 0) {

		d = p + d - 1;
		d = calculaDia(d, m);
		imprimeDia(d);
		scanf("%u%u", &d, &m);
	}

	fclose(stdin);
	fclose(stdout);

	return 0;

}
