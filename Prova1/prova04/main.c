#include <stdio.h>

int main(void) {
	int total = 0, conta;

	for(conta = 2; conta <= 20; conta += 2)
		total += conta;

	printf("%d", total);
	return 0;
}
