#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int table[100][100];
void makeTable(int n, int x, int y)
{
	int i, j;

	table[x][y] = 1;

	for (j = y + 1; j <= n; j++)
		table[x][j] = table[x][j - 1] + 1;
	for (j = y - 1; j >= 1; j--)
		table[x][j] = table[x][j + 1] + 1;

	for (j = 1; j <= n; j++) {
		for (i = x + 1; i <= n; i++)
			table[i][j] = table[i - 1][j] + 1;
		for (i = x - 1; i >= 1; i--)
			table[i][j] = table[i + 1][j] + 1;
	}
}

void printTable(int n)
{
	int i, j;

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++)
			printf("%d ", table[i][j]);
		printf("\n");
	}
}

int main(void)
{
	int n, x, y;

	scanf("%d", &n);
	scanf("%d %d", &x, &y);

	makeTable(n, x, y);
	printTable(n);
}
