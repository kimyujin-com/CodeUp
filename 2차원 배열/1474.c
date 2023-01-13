#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void makeTable(int t[][100], int n, int m)
{
	int i, j, k = 1;

	for (j = 0; j < m; j++)
		if ((j + 1) % 2 == 0)
			for (i = 0; i < n; i++)
				t[i][m - 1 - j] = k++;
		else
			for (i = n - 1; i >= 0; i--)
				t[i][m - 1 - j] = k++;
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
	int table[100][100];

	scanf("%d %d", &n, &m);

	makeTable(table, n, m);
	printTable(table, n, m);
}
