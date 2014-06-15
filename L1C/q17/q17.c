/*
 * q17.c
 *
 *  Created on: 22/04/2014
 *      Author: MASC
 */
#include <stdio.h>
#include <stdlib.h>
#define TAM 35

void inverte(char str[], int n) {
	if (n == 0) {
		printf("%c", str[0]);
		return;
	} else {
		printf("%c", str[n]);
		inverte(str, n - 1);
	}
}

int main() {
	int n, i;
	char str[TAM];
	freopen("e17.txt", "r", stdin);
	freopen("s17.txt", "w", stdout);

	scanf("%d", &n);
	getchar();

	while(n--) {
		for (i = 0; i < TAM; i++) {
			str[i] = getchar();
			if (str[i] == '\n') {
				str[i] = '\0';
				break;
			}
		}

		inverte(str, i - 1);
		printf("\n");
	}

	return EXIT_SUCCESS;
}
