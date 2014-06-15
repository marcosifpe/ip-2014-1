#include <stdio.h>

int main(void) {
	int veta[11], vetb[11], i;
	for (i = 1; i <= 10; i += 1) {
		vetb[i] = 0;
		if (i % 2 == 0) veta[i] = i;
		else veta[i] = 2 * i;
	}

	for (i = 1; i <= 10; i += 1) {
		while(veta[i] > i) {
			vetb[i] = veta[i];
			veta[i] -= 1;
		}
	}

	for (i = 1; i <= 10; i += 1)
		printf("%d ", vetb[i]);
	return 0;
}
