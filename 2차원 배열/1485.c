#define _CRT_SECURE_NO_WARNINGS//구글링
#include <stdio.h>

int main(void)
{
	int n, m;
	int i = 0, j = 0, cnt;
	int row = 0, col = -1, limit = 0, reverse = 1;
	int t[100][100] = { 0 };

	scanf("%d %d", &n, &m);

	cnt = n * m;
	while (cnt > 0) {
		for (i = 0; i < m - limit; i++) {
			col += reverse;
			t[row][col] = cnt--;
		}
		for (j = 0; j < n - limit - 1; j++) {
			row += reverse;
			t[row][col] = cnt--;
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
