#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void makeTable(int t[][100], int n, int m)
{
	int i, j = 0, k = 1, h;

	for (h = -(m - 1); h <= n; h++)
		for (i = n - 1; i >= 0; i--)
			for (j = m - 1; j >= 0; j--)
				if (h == i - j)
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
