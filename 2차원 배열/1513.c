#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int table[100][100];
void makeTable(int n)
{
	int i, j, k = 1, h = n, cnt = 1;

	for (h = n + 1; h <= n * 2; h++) {
		if (cnt % 2) {
			for (i = n; i >= 1; i--)
				for (j = 1; j <= n; j++)
					if (i + j == h)
						table[i][j] = k++;
		}
		else {
			for (i = 1; i <= n; i++)
				for (j = n; j >= 1; j--)
					if (i + j == h)
						table[i][j] = k++;
		}
		cnt++;
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
	int n;

	scanf("%d", &n);

	makeTable(n);
	printTable(n);
}
