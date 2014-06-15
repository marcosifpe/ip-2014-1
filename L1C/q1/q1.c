#include <stdio.h>
#include <stdlib.h>

int main() {
	freopen("e1.txt", "r", stdin);
	freopen("s1.txt", "w", stdout);

	unsigned int i, npistas, cmp, dsp, cbs, vlp, total;

	scanf("%u", &npistas);
	for (i = 0; i < npistas; i++) {
		scanf("%u%u%u%u", &cmp, &dsp, &cbs, &vlp);
		total = vlp * (cmp / dsp) + (cmp * cbs);
		printf("%u\n", total);
	}

	fclose(stdin);
	fclose(stdout);
	return 0;
}
