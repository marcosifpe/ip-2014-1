/*
 * q4.c
 *
 *  Created on: 06/05/2014
 *      Author: MASC
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	int i;
	char c;
	freopen("e4.txt", "r", stdin);
	freopen("s4.txt", "w", stdout);

	scanf("%d %c", &i, &c);

	if (c == 'H') {
		printf("%.0lf:%d\n", 4.0/3.0*i, i);
		printf("%.0lf:%d\n", 16.0/9.0*i, i);
	} else {
		printf("%d:%.0lf\n", i, 3.0/4.0*i);
		printf("%d:%.0lf\n", i, 9.0/16.0*i);

	}

	return EXIT_SUCCESS;
}

