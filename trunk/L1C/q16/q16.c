/*
 * q16.c
 *
 *  Created on: 06/05/2014
 *      Author: MASC
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int fibonnacci(int n) {
	if (n == 0 || n == 1)
		return n;
	else
		return fibonnacci(n-1) + fibonnacci(n-2);
}

int main(void) {
	int n, i, s, f;
	freopen("e16.txt", "r", stdin);
	freopen("s16.txt", "w", stdout);
	scanf("%d", &n);
	for (i = 0, s = 0; i <= n; ++i) {
		if (i)
			printf("+");
		f = fibonnacci(i);
		s += f;
		printf("%d", f);
	}

	printf("=%d\n", s);
	return 0;
}

