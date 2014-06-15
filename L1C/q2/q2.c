#include <stdio.h>
#include <stdlib.h>

int main() {

	freopen("e2.txt", "r", stdin);
	freopen("s2.txt", "w", stdout);

	unsigned int i, n, m, l;

	scanf("%u", &n);
	for (i = 0; i < n; i++) {
		scanf("%u%u", &m, &l);
		m = m % l;
		printf("%u\n", m);

	}

	fclose(stdin);
	fclose(stdout);

	return 0;
}
