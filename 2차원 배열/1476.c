#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void makeTable(int t[][100], int n, int m)
{
	int i, j = 0, k = 1, h, keep = n + m;

	for (h = 0; h <= keep - 2; h++)
		for (j = 0; j < m; j++)
			for (i = 0; i < n; i++)
				if (h == i + j)
					t[i][j] = k++;
}
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
	int n, m;
	int table[100][100] = { 0 };

	scanf("%d %d", &n, &m);

	makeTable(table, n, m);
	printTable(table, n, m);
}
