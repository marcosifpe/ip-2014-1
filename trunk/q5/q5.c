/*
 * q5.c
 *
 *  Created on: 05/05/2014
 *      Author: MASC
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	int n, x, y;
	freopen("e5.txt", "r", stdin);
	freopen("s5.txt", "w", stdout);
	scanf("%d", &n);

	while (1) {
		y = 0;
		scanf("%d", &x);

		if (!x)
			break;

		printf("%d: ", x);

		y = 2*x;
		while (1) {
			printf("%d", y);
			y += x;

			if (y < n) {
				printf(", ");
			} else {
				break;
			}
		}

		printf("\n");
	}

	return 0;
}

