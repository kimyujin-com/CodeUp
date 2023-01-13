#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int table[20][20];
void makeTable(int n)
{
	/**if (table[n][m])
		return table[n][m];
	else if (n == m)
		return table[n][m] = makeTable(n, m - 1) - makeTable(n - 1, m - 1);
	else
		return table[n][m] = makeTable(n - 1, m) + makeTable(n, m + 1);**/
	int i, j;

	for (i = 1; i <= n; i++)
		for (j = 2; j <= i; j++)
			table[i][j] = table[i][j - 1] - table[i - 1][j - 1];
}

void printTable(int n)
{
	int i, j;

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++)
			printf("%d ", table[i][j]);
		printf("\n");
	}
}

int main(void)
{
	int i, row;

	scanf("%d", &row);
	for (i = 1; i <= row; i++)
		scanf("%d", &table[i][1]);

	makeTable(row);
	printTable(row);
}
