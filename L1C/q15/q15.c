/*
 * q15.c
 *
 *  Created on: 31/05/2013
 *      Author: masc
 */

#include <stdio.h>
#include <stdlib.h>

int mdc(int x, int y) {
	if (y == 0)
		return x;
	else
		return mdc(y, x % y);
}

int main(void) {
	int a, b, n;
	freopen("e15.txt", "r", stdin);
	freopen("s15.txt", "w", stdout);
	scanf("%d", &n);

	do {
		scanf("%d %d", &a, &b);
		printf("%d\n", mdc(a, b));
	} while (--n);


	fclose(stdin);
	fclose(stdout);
	return 0;
}

