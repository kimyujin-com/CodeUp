#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, m;
	int i = 0, j = 0, cnt;
	int row = -1, col, limit = 0, reverse = 1;
	int t[100][100] = { 0 };

	scanf("%d %d", &n, &m);

	cnt = 1;
	col = m - 1;
	while (cnt <= n * m) {
		for (i = 0; i < n - limit; i++) {
			row += reverse;
			t[row][col] = cnt++;
		}
		for (j = 0; j < m - limit - 1; j++) {
			col -= reverse;
			t[row][col] = cnt++;
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
