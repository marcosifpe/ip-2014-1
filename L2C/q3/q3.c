#include <stdio.h>
#include <stdlib.h>
#define L 3
void lermatriz(int m[L][L]) {
	int i, j;
	for (i = 0; i < L; i++) {
		for (j = 0; j < L; j++) {
			scanf("%d", &m[i][j]);
		}
	}
}
void calcDet(int x[L][L]) {
	int det, det1, det2;
	det1 = (x[2][0] * x[1][1] * x[0][2]) + (x[0][0] * x[1][2] * x[2][1])
			+ (x[0][1] * x[1][0] * x[2][2]);
	det2 = (x[0][0] * x[1][1] * x[2][2]) + (x[0][1] * x[1][2] * x[2][0])
			+ (x[0][2] * x[1][0] * x[2][1]);
	det = det2 - det1;
	printf("%d\n", det);
}
int main(void) {
	int a, k, n[L][L];
	freopen("e3.txt", "r", stdin);
	freopen("s3.txt", "w", stdout);
	scanf("%d", &a);
	for (k = 0; k < a; k++) {
		lermatriz(n);
		calcDet(n);
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
