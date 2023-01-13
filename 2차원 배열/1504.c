#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void makeTable(int n, int table[][100])
{
	int i, j, k = 1;

	for (j = 0; j < n; j++)
		if (j % 2 == 0)
			for (i = 0; i < n; i++)
				table[i][j] = k++;
		else
			for (i = n - 1; i >= 0; i--)
				table[i][j] = k++;
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
