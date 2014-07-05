#include <stdio.h>

int main() {
	int n = 0, i = 0, j, contSub = 0, contCon = 0;
	char string[20], substring[20], c;

	freopen("e7.txt", "r", stdin);
	freopen("s7.txt", "w", stdout);

	scanf("%d", &n);

	while (n) {
		scanf("%c", &c);
		for (i = 0; i < 20; i++) {
			scanf("%c", &c);
			if (c == ' ')
				break;
			substring[contSub] = c;
			contSub++;
		}
		substring[contSub] = '\0';

		scanf("%s", string);

		for (i = 0; i < 20; ++i) {
			if (string[i] == '\0')
				break;

			if (string[i] == substring[0]) {
				for (j = 0; j < contSub; j++) {
					if (string[i + j] == substring[j])
						contCon++;
				}
			}

			if (contCon == contSub) {
				printf("%s eh substring de %s\n", substring, string);
				break;
			} else
				contCon = 0;
		}

		if (contCon != contSub)
			printf("%s nao eh substring de %s\n", substring, string);

		n--;
		contSub = 0;
		contCon = 0;
	}

	fclose(stdin);
	fclose(stdout);

	return 0;
}
