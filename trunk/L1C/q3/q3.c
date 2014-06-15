/*
 * q3.c
 *
 *  Created on: 05/05/2014
 *      Author: MASC
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
	char c;
	freopen("e3.txt", "r", stdin);
	freopen("s3.txt", "w", stdout);
	c = getchar();

	while (c != '.') {
		switch (c) {
		case 'A':
			printf("T");
			break;
		case 'T':
			printf("A");
			break;
		case 'C':
			printf("G");
			break;
		case 'G':
			printf("C");
			break;
		}

		c = getchar();
	}

	return EXIT_SUCCESS;
}

