#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, j, n, m, limit = 0, cnt = 1;
	int row = -1, col, reverse = 1;
	int t[100][100];

	scanf("%d %d", &n, &m);

	col = m - 1;
	cnt = n * m;
	while (cnt > 0) {
		for (i = 0; i < n - limit; i++) {
			row += reverse;
			t[row][col] = cnt--;
		}
		for (j = 0; j < m - limit - 1; j++) {
			col -= reverse;
			t[row][col] = cnt--;
		}
		reverse *= -1;
		limit++;
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++)
			printf("%d ", t[i][j]);
		printf("\n");
	}
}
