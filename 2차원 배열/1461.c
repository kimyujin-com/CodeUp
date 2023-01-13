#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void makeTable(int t[][100], int n)
{
	int i, j, k = 1;

	for (i = 0; i < n; i++)
		for (j = n - 1; j >= 0; j--)
			t[i][j] = k++;
}
void printTable(int t[][100], int n)
{
	int i, j;

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("%d ", t[i][j]);
		printf("\n");
	}
}
int main(void)
{
	int n;
	int table[100][100];

	scanf("%d", &n);

	makeTable(table, n);
	printTable(table, n);
}
