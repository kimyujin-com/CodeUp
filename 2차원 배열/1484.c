#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, m;
	int i = 0, j = 0, k = 1, cnt = 0;
	int row = 0, col = -1, limit = 0, reverse = 1;
	int t[100][100] = { 0 };

	scanf("%d %d", &n, &m);

	while (cnt != n * m) {
		for (i = 0; i < m - limit; i++) {
			col += reverse;
			t[row][col] = k++;
			cnt++;
		}
		for (j = 0; j < n - limit - 1; j++) {
			row += reverse;
			t[row][col] = k++;
			cnt++;
		}
		(reverse == 1) ? reverse = -1 : (reverse = 1);
		limit++;
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++)
			printf("%d ", t[i][j]);
		printf("\n");
	}
}
