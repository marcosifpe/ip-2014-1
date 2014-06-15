#include <stdio.h>
#include <stdlib.h>

int valorDaJogada(int carta, int dado) {
	if (dado % 2 == 0)
		return (carta + dado);
	else
		return (carta - dado);
}

int main() {

	freopen("e11.txt", "r", stdin);
	freopen("s11.txt", "w", stdout);

	int i, j, numpartidas, ctjack, ctdaniel, ddjack, dddaniel, totaljack = 0,
			totaldaniel = 0;

	scanf("%d", &numpartidas);

	for (i = 0; i < numpartidas; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d%d%d%d", &ctjack, &ddjack, &ctdaniel, &dddaniel);
			totaljack += valorDaJogada(ctjack, ddjack);
			totaldaniel += valorDaJogada(ctdaniel, dddaniel);

		}
		if (totaljack > totaldaniel)
			printf("Jack");
		else if (totaljack < totaldaniel)
			printf("Daniel");
		else
			printf("empate");
		totaljack = 0;
		totaldaniel = 0;
		printf("\n");
	}

	fclose(stdin);
	fclose(stdout);

	return 0;

}
