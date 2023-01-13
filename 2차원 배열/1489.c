#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printTable(int t[][100], int n, int m)
{
	int i, j;

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++)
			printf("%d ", t[i][j]);
		printf("\n");
	}

}
int main(void)
{
	int n, m, i, j;
	int row, col, cnt, limit = 0, reverse = 1;
	int t[100][100];

	scanf("%d %d", &n, &m);

	row = n - 1;
	col = m;
	cnt = n * m;
	while (cnt > 0) {
		for (j = 0; j < m - limit; j++) {
			col -= reverse;
			t[row][col] = cnt--;
		}
		for (i = 0; i < n - limit - 1; i++) {
			row -= reverse;
			t[row][col] = cnt--;
		}
		reverse *= -1;
		limit++;
	}
	printTable(t, n, m);
}
