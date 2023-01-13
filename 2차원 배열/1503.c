#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void makeTable(int n, int table[][50])
{
	int i, j, k = 1;

	for (i = 0; i < n; i++)
		if (i % 2 == 0)
			for (j = 0; j < n; j++)
				table[i][j] = k++;
		else
			for (j = n - 1; j >= 0; j--)
				table[i][j] = k++;
}

void printTable(int n, int table[][50])
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
	int n, table[50][50];

	scanf("%d", &n);
	makeTable(n, table);
	printTable(n, table);
}
