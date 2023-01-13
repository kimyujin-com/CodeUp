#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void makeTable(int n, int table[][100])
{
	int i;
	int col = 0, row = -1;
	int set = 0, reverse = 1, cnt = 1;

	while (cnt <= n * n) {
		for (i = 0; i < n - set; i++) {
			row += reverse;
			table[row][col] = cnt++;
		}
		for (i = 0; i < n - set - 1; i++) {
			col += reverse;
			table[row][col] = cnt++;
		}
		set++;
		reverse *= -1;
	}
}

void printTable(int n, int table[][100])
{
	int i, j;

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("%d ", table[i][j]);
		printf("\n");
	}
}

int main(void)
{
	int n, table[100][100];

	scanf("%d", &n);
	makeTable(n, table);
	printTable(n, table);
}
